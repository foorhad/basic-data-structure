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
    // pair<string,int>p;
    // p.first = "Mohammad Forhad";
    // p.second = 52;
    // cout<<p.first<<endl<<p.second;
    queue< pair<string,int> > q;
    q.push(make_pair("forha",20));
    pair<string,int> p = q.front();
    string s = p.first;
    cout<<s;
    cout<<p.second;
    return 0;
}