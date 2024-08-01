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
void delete_node(Node *head, int pos) //o(n)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void delete_head(Node *&head) // O(1)
{
    Node *delete_head = head;
    head = head->next;
    delete delete_head;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);
    int pos;
    cin >> pos;
    if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos >= size(head))
    {
        cout << "Invalid index" << endl;
    }
    else
    {
        delete_node(head, pos);
    }

    print_linked_list(head);

    return 0;
}