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
int compare(Node *head1, Node *head2)
{
    if(size(head1) == size(head2))
    {
        Node *i =head1;
        Node *j =head2;
        while (i!=NULL)
        {
            if (i->val != j->val)
            {
                return 0;
            }
            i=i->next;
            j=j->next;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    int val;
    while (1)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }

    Node *head1 = NULL;
    Node *tail1 = head1;
    int val1;
    while (1)
    {
        cin>>val1;
        if (val1 == -1)
        {
            break;
        }
        insert_tail(head1,tail1,val1);
    }
    cout<<compare(head,head1);
     
    return 0;
}
