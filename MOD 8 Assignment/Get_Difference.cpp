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
    long long int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
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
int main()
{
    Node *head = NULL;
    Node *tail = head;
    long long int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, val);
        }
    }

    long long int max = INT_MIN;
    long long int min = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
        if (i->val < min)
        {
            min = i->val;
        }
    }
    cout << max - min;

    return 0;
}