#include <iostream>  // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>   // File streams (for file input/output)
#include <iomanip>   // Input/output manipulators (for formatting)
#include <string>    // String manipulation
#include <vector>    // Dynamic arrays
#include <list>      // Doubly linked list
#include <queue>     // Queue data structure
#include <stack>     // Stack data structure
#include <map>       // Associative array (key-value pairs)
#include <set>       // Set data structure
#include <algorithm> // Standard algorithms (sorting, searching, etc.)
#include <cmath>     // Mathematical functions
#include <ctime>     // Date and time functions
#include <cstdlib>   // Standard library utilities (includes functions like `rand()` and `exit()`)
#include <cstring>   // C-style string functions
#include <cassert>   // Assertions
#include <utility>
#include <limits.h>

void fnc(int *&ptr)
{
    ptr = NULL;
}

using namespace std;

int main()
{
    int x = 10;
    int *p = &x;
    fnc(p);
    cout << x << endl;
    // if (p == NULL)
    //     cout << "pointer is NULL" << endl;
    // else
    //     cout << *p << endl;

    return 0;
}