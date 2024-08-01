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
        Node *prev;
        Node *next;

        Node(int val)
        {
            this->val=val;
            this->prev=NULL;
            this->next=NULL;
        }  
};

//size of linked list
int sz = 0;
void insert_tail(Node *&head, int val)
{
    sz++;
    Node *newnode= new Node(val); //30
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newnode;
    newnode->prev = tmp;
}
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void size(Node *head) //O(1)
{
    cout<<sz<<endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int val;cin>>val;
        if (val == -1)
        {
            break;  
        }
        insert_tail(head,val);  
    }
    size(head);
    print_node(head);
    
    
    
    return 0;
}