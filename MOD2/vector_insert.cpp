#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {4, 5, 6, 78, 12};
    // a.insert(a.begin() + 2, 99); //add single value
    vector<int> b = {56, 12, 13, 14, 15};
    a.insert(a.begin() + 2, b.begin(), b.end());
    for (int s : a)
    {
        cout << s << " ";
    }
    return 0;
}