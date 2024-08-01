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
void insert_tail1(Node *&head, Node *&tail, int val) // O(1)
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
int size(Node *head) // o(n)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        ;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
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
            insert_tail1(head1, tail1, val); // O(1)
        }
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
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
            insert_tail1(head2, tail2, val); // O(1)
        }
    }
    if (size(head1) == size(head2))
    {
        int flag = 1;
        for (Node *i = head1, *j = head2; i != NULL, j != NULL; i = i->next, j = j->next)
        {
            if (i->val != j->val)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}