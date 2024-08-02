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
class myQueue
{
    public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
       return l.front();
    }
    int size()
    {
        return l.size();
    }
    int empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    int x;cin>>x;
    while (x--)
    {
        int val;cin>>val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    
    
    return 0;
}