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
class myStack
{
    public:
        list<int> l;

        void push(int val)
        {
            l.push_back(val);
        }
        int top()
        {
            return l.back();
        }
        void pop()
        {
            l.pop_back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            if (l.size() == 0)
            {
               return true;
            }
            else return false;
        }
};
int main()
{
    myStack ls;
    int q;cin>>q;
    while (q--)
    {
        int val; cin>>val;
        ls.push(val);
    }
    while (!ls.empty())
    {
        cout<<ls.top()<<endl;
        ls.pop();
    }
    
    
    
    
    return 0;
}