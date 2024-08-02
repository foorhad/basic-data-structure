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
    queue<int> queue1, queue2, MergedQueue;
    int n;cin>>n;
    while (n--)
    {
        int val;cin>>val;
        queue1.push(val);
    }

    int m;cin>>m;
    while (m--)
    {
        int val;cin>>val;
        queue1.push(val);
    }
    while (!queue1.empty())
    {
        MergedQueue.push(queue1.front());
        queue1.pop();
    }
    while (!queue2.empty())
    {
        MergedQueue.push(queue2.front());
        queue2.pop();
    }
    while (!MergedQueue.empty())
    {
        cout<<MergedQueue.front()<<" ";
        MergedQueue.pop();
    }
    
    
    return 0;
}