#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uses types of insert function
    // insert(pos,value)
    // insert(pos,time,value)
    // insert(pos,start,end)

    //===Method 01===
    // vector<int> c = {1, 2, 3, 4, 5};
    // c.insert(c.begin(), 100);
    // for (int i = 0; i < c.size(); i++)
    // {
    //     cout << c[i] << " ";
    // }

    //===Method 02===
    // vector<int> c = {1, 2, 3, 4, 5};
    // c.insert(c.begin() + 3, 4, 100);
    // for (int i = 0; i < c.size(); i++)
    // {
    //     cout << c[i] << " ";
    // }

    //===Method 03====
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {10, 20, 30};
    a.insert(a.begin() + 3, b.begin(), b.end());
    for (int e : a)
        cout << e << " ";
    return 0;
}