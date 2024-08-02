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

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
    public:
    Node *head = NULL;
    Node *tail = head;
    int cnt=0;
    void push(int val)
    {
        cnt++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next=newnode;
        tail = newnode;
    }
    void pop()
    {
        cnt--;
        Node *deletenode = head;
        head = head->next;
        if(head == NULL) tail = NULL;
        delete deletenode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return cnt;
    }
    int empty()
    {
        if (size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }    
    }
};
int main()
{
    myQueue q;
    int x;cin>>x;
    while (x--)
    {
        int val;cin>>val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    
    
    return 0;
}