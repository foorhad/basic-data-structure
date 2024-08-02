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
void insert_head(Node *&head,Node *&tail,int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail =newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void  insert_tail(Node* &head,Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insert_any_pos(Node* head,Node* tail,int pos,int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->prev=tmp;
    newnode->next->prev=newnode;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    int q;
    cin>>q;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if (x == 0)
        {
            insert_head(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x == size(head))
        {
            insert_tail(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x >= size(head))
        {
          cout<<"Invalid"<<endl;
        }
        else
        {
            insert_any_pos(head,tail,x,v);
            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}
