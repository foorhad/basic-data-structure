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
int sz=0;
void insert_tail(int val, Node* &head,Node* &tail) //O(1)
{
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
void insertAnypos(int data,int pos,Node *&head,Node* &tail){
    sz++;
    Node *newNode = new Node(data);
    if(pos == 0){
        newNode->next=head;
        head = newNode;
    }
    else if (pos==sz)
    {
        tail->next=newNode;
        tail=newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp=temp->next; //update
        }
        newNode->next=temp->next;
        temp->next=newNode;    
    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
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
    int q;cin>>q;
    while (q--)
    {
        int index,value;
        cin>>index>>value;
        if(index > sz)cout<<"Invalid"<<endl;
        else
        {
            insertAnypos(value,index,head,tail);
            print(head);cout<<endl;
        }
       
    }
    
    
    
    return 0;
}
