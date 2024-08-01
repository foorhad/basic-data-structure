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
void insert_tail(Node *&head, Node *&tail, int val) // O(1)
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
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (1) // O(N)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }
            else
            {
                insert_tail(head, tail, val); // O(1)
            }
        }
        int x;
        cin >> x;
        int cnt = -1;
        int flag = 0;
        for (Node *i = head; i != NULL; i = i->next) // O(N)
        {
            cnt++;
            if (x == i->val)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}