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
void palindrome(Node* head,Node* tail)
{
    Node* tmp1 = head;
    Node* tmp2 = tail;
    int flag = 1;
    while (tmp1 != tmp2 && tmp1->next != tmp2)
    {
        if(tmp1->val != tmp2->val)
        {
            flag = 0;
        }
        tmp1 = tmp1->next;
        tmp2=tmp2->prev;
    }
    if(tmp1->val != tmp2->val) //manual check
    {
        flag = 0;
    }
    if (flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
    palindrome(head,tail);
    
    
    return 0;
}
