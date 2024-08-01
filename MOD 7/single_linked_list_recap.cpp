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
void print_linked_list(Node *head) // o(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_linked_list(Node *head, int pos, int val) // o(n)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
int size(Node *head) // o(n)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_at_tail(Node *&head, Node *&tail, int val) // o(1)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void insert_at_head(Node *&head, int val) // O(1)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = head;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);

    int pos, val;
    cout << "input position and value: ";
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "invalid index" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_linked_list(head, pos, val);
    }
    print_linked_list(head);
    cout << "tail=" << tail->val << endl;

    return 0;
}