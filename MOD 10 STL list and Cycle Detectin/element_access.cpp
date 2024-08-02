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
    mylist.push_back(80);
    mylist.push_back(100);
    mylist.push_back(8);
    mylist.push_back(9);
    mylist.push_back(9);
    mylist.push_back(89);

    cout<<"tail: "<<mylist.back()<<endl; //access tail element
    cout<<"Head: "<<mylist.front()<<endl; //access head element
    cout<<*next(mylist.begin(),2)<<endl; //access ith element
    return 0;
}