#include <iostream>  // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>   // File streams (for file input/output)
#include <iomanip>   // Input/output manipulators (for formatting)
#include <string>    // String manipulation
#include <vector>    // Dynamic arrays
#include <list>      // Doubly linked list
#include <queue>     // Queue data structure
#include <stack>     // Stack data structure
#include <map>       // Associative array (key-value pairs)
#include <set>       // Set data structure
#include <algorithm> // Standard algorithms (sorting, searching, etc.)
#include <cmath>     // Mathematical functions
#include <ctime>     // Date and time functions
#include <cstdlib>   // Standard library utilities (includes functions like `rand()` and `exit()`)
#include <cstring>   // C-style string functions
#include <cassert>   // Assertions
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
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        cout << "inserted at head" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    cout << "inserted at tail" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_any_postion(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << endl
             << "invalid postion input" << endl
             << endl;
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            cout << "invalid postion input" << endl
                 << endl;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << "inserted at position " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    cout << "inserted at head again." << endl
         << endl;
}
void delete_any_pos(Node *head, int pos)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << endl
             << "invalid position input" << endl
             << endl;
        return;
    }

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "invalid postion input" << endl
                 << endl;
            return;
        }
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "deleted " << pos << " position value" << endl
         << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "head is not available" << endl
             << endl;
        return;
    }
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    cout << endl
         << "deleted head" << endl
         << endl;
}
void print_size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    cout << endl
         << "Size of list: " << cnt << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 insert at tail" << endl;         // done
        cout << "Option 2 print linked list" << endl;      // done
        cout << "Option 3 Terminate" << endl;              // done
        cout << "Option 4 Insert at any position" << endl; // done
        cout << "Option 5 delete any position" << endl;    // done
        cout << "Option 6 delete head" << endl;            // done
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter the value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            cout << "your linked list is: ";
            print_linked_list(head);
            cout << endl;
        }
        else if (op == 3)
        {
            break;
        }
        else if (op == 4)
        {
            int pos, val;
            cout << "Input the postion: ";
            cin >> pos;
            cout << "Input the value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_any_postion(head, pos, val);
            }
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter the position: ";
            cin >> pos;
            delete_any_pos(head, pos);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
    }
    print_size(head);

    return 0;
}