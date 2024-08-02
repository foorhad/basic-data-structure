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
    list<int> mylist;
    mylist.push_back(90);
    mylist.push_back(100);
    mylist.push_back(110);

    mylist.push_front(80);
    // cout<<mylist.front()<<endl;
    for(int e:mylist)
    {
        cout<<e<<endl;
    }
    cout<<endl;

    mylist.pop_back();
    mylist.pop_front();
    for(int e:mylist)
    {
        cout<<e<<endl;
    }
    return 0;
}