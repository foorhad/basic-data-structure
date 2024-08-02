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
void reverse_doubly(Node* head,Node *tail)
{
    Node *i =head;
    Node *j =tail;
    while (i != j && i->next != j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val); //manuall proces
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
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
int main()
{
//     Node *head = new Node(12);
//     Node *a = new Node(13);
//     Node *b = new Node(14);
//     Node *c= new Node(12);
//     Node *tail = c;

//    head->next=a;
//    a->prev=head;
//    a->next=b;
//    b->prev=a;
//    b->next=c;
//    c->prev=b;
    Node *head = NULL;
    Node *tail = head;
    int val;
    while (1)
    {
        cin>>val;
        if (val == - 1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    

   reverse_doubly(head,tail);
   print_normal(head);
    
    return 0;
}