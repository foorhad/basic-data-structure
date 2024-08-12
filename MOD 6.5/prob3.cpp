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
int sz=0;
void insert_tail(int val, Node* &head,Node *&tail){
    sz++;
    Node *newNode=new Node(val);
    if(head == NULL){
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
}
void printMiddle(Node *head){
    if(sz%2==0)
    {
        Node *temp = head;
        for (int i = 1; i < sz/2; i++)
        {
            temp = temp->next;
        }
        cout<<temp->val<<" ";
        cout<<temp->next->val<<endl;
    }
    else if (sz%2!=0)
    {
        Node *temp = head;
        for (int i = 0; i < sz/2; i++)
        {
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int n;cin>>n;
        if(n==-1)break;
        insert_tail(n,head,tail);
    }
    printMiddle(head);
    return 0;
}
