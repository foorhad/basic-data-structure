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
    mylist.push_back(8);
    mylist.push_back(100);
    mylist.push_back(8);
    mylist.push_back(9);
    mylist.push_back(8);

    // list<int> mylist1;
    // mylist1.push_back(4);
    // mylist1.push_back(5);
    // mylist1.push_back(6);

    
    // mylist.insert(next(mylist.begin(),3),110);
    mylist.erase(next(mylist.begin(),2));

    // mylist.insert(next(mylist.begin(),1),mylist1.begin(),mylist1.end());
    // vector<int> vector1 = {12,13,14,15};
    // mylist.insert(next(mylist.begin(),1),vector1.begin(),vector1.end()); //copy from vector
    
    // int ar[5] = {21,31,41,51};
    // mylist1.insert(next(mylist1.begin(), 1),ar,ar+5);

    // mylist.erase(next(mylist.begin(),0), next(mylist.begin(),4));

    // replace(mylist.begin(),mylist.end(),8,900);

    // auto it = find(mylist.begin(),mylist.end(),900);
   
    // if (it == mylist.end())
    // {
    //     cout<<"Not found"<<endl;
    // }
    // else
    // {
    //     cout<<"found"<<endl;
    // }
    
    for(int e:mylist)
    {
        cout<<e<<endl;
    }
    cout<<endl;
    return 0;
}