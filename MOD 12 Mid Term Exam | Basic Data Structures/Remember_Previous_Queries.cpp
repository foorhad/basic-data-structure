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
void print(list<int> mylist)
{
    cout<<"L -> ";
    for (int e : mylist)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<"R -> ";
    mylist.reverse();
    for (int e : mylist)
    {
        cout<<e<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> mylist;

    int q;cin>>q;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if (x == 0)
        {
            mylist.push_front(v);
            print(mylist);
        }
        else if (x == 1)
        {
            mylist.push_back(v);
            print(mylist);
        }
        else if (x == 2)
        {
            int sz = mylist.size()-1;
            if(v <= sz)
            {
                mylist.erase(next(mylist.begin(),v));
            }
            print(mylist);
        }
    }    

    return 0;
}