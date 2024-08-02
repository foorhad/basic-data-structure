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
    stack<int> s;
    int n;cin>>n;
    while (n--)
    {
        int val;cin>>val;
        s.push(val);
    }
    stack<int> s_copy;
    while (!s.empty())
    {
        s_copy.push(s.top());
        s.pop();
    }
    while (!s_copy.empty())
    {
        cout<<s_copy.top()<<" ";
        s_copy.pop();
    }
    
    
    
    return 0;
}