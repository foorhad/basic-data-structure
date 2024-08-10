#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 2, 1, 4, 3, 9, 6};
    auto it = find(a.begin(), a.end(), 99);
    if (it == a.end())
        cout << "not found" << endl;
    else
    {
        cout << "found" << endl;
    }

    return 0;
}