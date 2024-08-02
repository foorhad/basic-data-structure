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
void insert_any_pos(Node *head,int pos, int val) //o(n)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void insert_head(Node *&head,Node *&tail,int val) //O(1)
{   
    Node *newnode=new Node(val);
    if (head== NULL)
    {
       head=newnode;
       tail=newnode;
       return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_tail(Node *&head,Node *&tail,int val)//O(1)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void print_normal(Node* head) //o(n)
{
    Node *tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail) //O(n)
{
    Node *tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int size(Node* head) //O(n)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head =new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    
    //connection
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    
    
    int pos,val;cin>>pos>>val;
    if (pos > size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if (pos == 0)
    {
        insert_head(head,tail,val);
    }
    else if (pos == size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_any_pos(head,pos,val);
    }
     
   print_normal(head);
   print_reverse(tail);
   
    
    return 0;
}