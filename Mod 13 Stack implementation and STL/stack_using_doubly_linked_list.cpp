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
using namespace std;

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
    myStack dll;
    int q;cin>>q;
    while (q--)
    {
        int val; cin>>val;
        dll.push(val);
    }
    while (!dll.empty())
    {
        cout<<dll.top()<<endl;
        dll.pop();
    }

    
    return 0;
}