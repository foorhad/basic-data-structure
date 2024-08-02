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
#include <limits.h>     //INT_MIN and INT_MAX functions
 
using namespace std;

class myStack
{
public:
    vector <int> v;     //vector is a STL of a array
    void push(int val)  //insert value from top point
    {
        v.push_back(val);
    }
    void pop() //delete value from top point
    {
        v.pop_back();
    }
    int top() //access value from top point
    {
        return v.back();
    }
    int size() //return the size of stack
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size() == 0) return true;
        else return false;
    }
};
int main()
{
    myStack st;
    int q;cin>>q;
    while(q--)
    {
        int val;cin>>val;
        st.push(val);
    }

    while(!st.empty())
    {
        cout<< st.top() <<endl;
        st.pop();
    }
    

    

   


    
    return 0;
}