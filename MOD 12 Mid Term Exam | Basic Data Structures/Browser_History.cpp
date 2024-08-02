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
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
Node *current = NULL;
void insert_tail(Node* &head,Node* &tail, string val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head=newnode;
        tail=newnode;
        current = newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void visit(Node *head, string url)
{
    Node *tmp = head;
    while(tmp->val != url)
    {
        tmp = tmp->next;
    }
    cout<<tmp->val<<endl;
    current = tmp;
}
void prev()
{
    if (current == NULL || current->prev == NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        cout<<current->prev->val<<endl;
        current = current->prev;
    }    
}
void next()
{
    if (current == NULL ||current->next == NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        cout<<current->next->val<<endl;
        current = current->next;
    }    
}

int main()
{
    Node *head = NULL;
    Node *tail = head;
    string val;
    while (1)
    {
        cin>>val;
        if (val == "end")
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string command;
        cin>>command;
        if(command == "visit")
        {
            string address;
            cin>>address;
            Node *tmp1 = head;
            int flag = 0;
            while(tmp1 != NULL)
            {
                if(tmp1->val == address)
                {
                    flag = 1;
                    visit(head, address);
                    break;
                }
                tmp1 = tmp1->next;
            }
            if(flag == 0)
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if (command == "prev")
        {
            prev();
        }
        else if (command == "next")
        {
            next();
        }   
    }

    return 0;
}
