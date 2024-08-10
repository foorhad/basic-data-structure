#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    a.erase(a.begin() + 2); // single value erase
    for (int e : a)
        cout << e << " ";

    cout << endl;

    // multiple value erase
    vector<int> x = {1, 2, 3, 4, 5, 6};
    x.erase(x.begin(), x.end());
    for (int e : x)
        cout << e << " ";

    return 0;
}