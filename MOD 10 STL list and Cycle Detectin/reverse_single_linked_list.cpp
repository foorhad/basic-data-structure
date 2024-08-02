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
    // Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        // this->prev = NULL;
    }
};
void insert_tail(Node* &head,Node *&tail,int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail= newnode;   
}
void reverse_linked_list(Node* &head, Node *current_node)
{
    if (current_node->next == NULL)
    {
        head = current_node;
        return;
    }
    reverse_linked_list(head,current_node->next);
    current_node->next->next=current_node;
    current_node->next=NULL;
    
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    
}
void print_reverse(Node *head)
{   
    if (head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout<<head->val<<" ";
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    int val;
    while (1)
    {
        cin>>val;
        if (val==-1)
        {
           break;
        }
        insert_tail(head,tail,val);   
    }
    reverse_linked_list(head,head);
    print_normal(head);
    print_reverse(head);
    return 0;
}