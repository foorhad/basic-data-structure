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
        int val; cin>>val;
        s.push(val);
    }

    queue<int> q;
    int m;cin>>m;
    while (m--)
    {
        int val; cin>>val;
        q.push(val);
    }
    
    int flag = 1;
    if(s.size() == q.size())
    {
        while (!s.empty())
        {
           if (s.top() != q.front())
           {
            flag = 0 ;
            break;
           }
           s.pop(), q.pop();
        }
    }
    else
    {
        flag = 0;
    }

    if (flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}