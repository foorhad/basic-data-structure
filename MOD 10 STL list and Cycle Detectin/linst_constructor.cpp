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
    // list<int> list2 = {1,2,3,4,5,6};
    // list<int> mylist;
    // list<int> mylist(list2); //copy from another list //erro through

    int ar[6] = {2,3,4,5,6,7};
    list<int> mylist(ar,ar+6); //copy from another array

    // vector<int> v={20,30,40,50};
    // list<int>mylist(v.begin(),v.end());  //error through
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    cout<<"Size of list: "<<mylist.size()<<endl;
    


    return 0;
}