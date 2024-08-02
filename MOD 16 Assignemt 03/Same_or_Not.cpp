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
    int N,M;cin>>N>>M;
    stack<int> A;
    while(N--)
    {
        int val; cin>>val;
        A.push(val);
    }
 
    queue<int> B;
    while (M--)
    {
        int val; cin>>val;
        B.push(val);
    }

    int flag=1;
    if(A.size() != B.size())
    {
        flag = 0;
    }
    else{
        while (!A.empty())
        {
            if (A.top() != B.front())
            {
                flag=0;
                break;
            }
            A.pop();
            B.pop();    
        }  
    }

    if (flag == 1)
    {
      cout<<"YES"<<endl;
    }
    else
    {
     cout<<"NO"<<endl;
    }
    

    
    return 0;
}