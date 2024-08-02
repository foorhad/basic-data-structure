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
    int q;cin>>q;
    queue<int> numqueue;
    queue<string> stringqueue;
    while (q--)
    {
        int val;cin>>val;
        string s;
        if(val==0)
        {
            cin>>s;
            stringqueue.push(s);
        }

        if(val==1)numqueue.push(val);
        
        if (stringqueue.empty())
        {
            cout<<"Invalid"<<endl;
            numqueue.pop();
        }
        else
        {
            if(!numqueue.empty())
            {
                cout<<stringqueue.front()<<endl;
                stringqueue.pop();
                numqueue.pop();
            }
        }   
    }
    

    
    
    return 0;
}