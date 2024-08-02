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

int main()
{
    //create queue data structure
    queue<int> q;
    int n;cin>>n;
    while (n--)
    {
        int val;cin>>val;
        q.push(val);
    }

    //create stack data structure
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    queue<int> copyQueue;
    while (!s.empty())
    {
        copyQueue.push(s.top());
        s.pop();
    }
    

    //print
    while (!copyQueue.empty())
    {
        cout<<copyQueue.front()<<" ";
        copyQueue.pop();
    }
 
    
    
    return 0;
}