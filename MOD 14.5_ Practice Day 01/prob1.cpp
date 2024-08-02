#include <iostream>     // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>      // File streams (for file input/output)
#include <iomanip>      // Input/output manipulators (for formatting)
#include <string>       // String manipulation
#include <vector>       // Dynamic arrays
#include <list>         // Doubly linked list
#include <queue>        // Queue data structure
#include <stack>        // Stack data structure
#include <map>          // Associative array (key-value pairs)
#include <set>          // Set data structure
#include <algorithm>    // Standard algorithms (sorting, searching, etc.)
#include <cmath>        // Mathematical functions
#include <ctime>        // Date and time functions
#include <cstdlib>      // Standard library utilities (includes functions like `rand()` and `exit()`)
#include <cstring>      // C-style string functions
#include <cassert>      // Assertions
#include <utility>
#include <limits.h>

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
using namespace std;
class myStack
{
    public:
        Node *head = NULL;
        Node *tail = head;
        int cnt = 0;
        void push(int val)
        {
            cnt++;
            Node *newnode = new Node(val);
            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev=tail;
            tail = newnode;
        }
        int top()
        {
            return tail->val;
        }
        void pop()
        {   
            cnt--;
            Node *deleteNOde = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            }else
            {
                tail->next = NULL;} 
            delete deleteNOde;
        }
        int size()
        {
            return cnt;
        }
        bool empty()
        {
            if (size() == 0)
            {
               return true;
            }
            else return false;
        }
};
int main()
{
    myStack dll1, dll2;
    int n;cin>>n;
    while (n--)
    {
        int val; cin>>val;
        dll1.push(val);
    }

    int m;cin>>m;
    while (m--)
    {
        int val; cin>>val;
        dll2.push(val);
    }
    
    int flag = 1;
    if(dll1.size() == dll2.size())
    {
        while (!dll1.empty())
        {
           if (dll1.top() != dll2.top())
           {
            flag = 0 ;
            break;
           }
           dll1.pop(), dll2.pop();
        }
    }
    else
    {
        flag = 0;
    }

    if (flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
   
    
    return 0;
}