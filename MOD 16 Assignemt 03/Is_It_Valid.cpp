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
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int o = 0;
        int z = 0;
        stack<char> stack;
        for(int i = 0; i<s.size(); i++)
        {
            stack.push(s[i]);
        }
        while (!stack.empty())
        {
            if (stack.top() == '0')
            {
               z++;
            }
            else
            {
                o++;
            }
            stack.pop();
        }
        if(o==z)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
    return 0;
}