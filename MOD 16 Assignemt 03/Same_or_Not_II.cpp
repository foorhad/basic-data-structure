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
    int sz = 0;

    void push(int val)
    {
        Node *newnode = new Node(val);
        sz++;
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
    void pop()
    {
        Node *deletenode = tail;
        sz--;
        tail = tail->prev;
        if(tail==NULL)head=NULL;
        delete deletenode;
    }
  
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool Isempty()
    {
        return sz==0;
    }
};

class myQueue
{
    public:
    Node *head = NULL;
    Node *tail = head;
    int sz = 0;

    void push(int val)
    {
        Node *newnode = new Node(val);
        sz++;
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

    int front()
    {
        return head->val;
    }

    void pop()
    {
        Node *deletenode = head;
        sz--;
        head = head->next;
        if(head==NULL)tail=NULL;
        delete deletenode;
    }

    int size()
    {
        return sz;
    }
    bool Isempty()
    {
        return sz==0;
    }

};

int main()
{
    int N,M;cin>>N>>M;
    myStack A;
    while(N--)
    {
        int val; cin>>val;
        A.push(val);
    }
 
    myQueue B;
    while (M--)
    {
        int val; cin>>val;
        B.push(val);
    }

    int flag=1;
    if(A.size() != B.size())
    {
        flag = 0;
    }
    else{
        while (!A.Isempty())
        {
            if (A.top() != B.front())
            {
                flag=0;
                break;
            }
            A.pop();
            B.pop();    
        }  
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