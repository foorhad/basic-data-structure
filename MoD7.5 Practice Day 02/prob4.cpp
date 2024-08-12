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
void insert_tail(int val, Node* &head,Node* &tail){
    Node *newNode=new Node(val);
    if(head == NULL){
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
}
void maximum(Node *head){
    Node *temp = head;
    int max = INT_MIN;
    while (temp!=NULL)
    {
       if(temp->val > max)
       {
        max = temp->val;
       }
       temp=temp->next;      
    }
    cout<<max<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;;
    int sz1 = 0;
    while (1)
    {
        int n;cin>>n;
        if(n==-1)break;
        sz1++;
        insert_tail(n,head,tail);
    }
    maximum(head);
    
    return 0;
}
