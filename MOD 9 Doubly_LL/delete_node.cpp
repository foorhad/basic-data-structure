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
void delete_node_any_pos(Node* head,int pos) //O(n)
{
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
       tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}
void delete_tail(Node *&head,Node* &tail) //o(1)
{
    Node *deletetail = tail;
    tail = tail->prev;
    delete deletetail;
    if (tail == NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node* &head, Node * &tail) //O(1)
{
    Node *deletehead = head;
    head = head->next;
    delete deletehead;
    if(head == NULL)
    {
        tail= NULL;
        return;
    }
    head->prev=NULL;
    
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
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    Node *tail = head;
    
    //connection
    // head->next=a;
    // a->prev=head;
    // a->next=b;
    // b->prev=a;
    // b->next=c;
    // c->prev=b;

    int pos;cin>>pos;
    if (pos >= size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if (pos == 0)
    {
        delete_head(head,tail);
    }
    else if (pos == (size(head)-1))
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_node_any_pos(head,pos);
    }

   print_normal(head);
//    print_reverse(tail);
   
    
    return 0;
}