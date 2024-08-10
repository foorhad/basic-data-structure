#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {2, 30, 4, 5, 6};
    // a.resize(2);
    // a.resize(5);
    a.insert(a.begin() + 2, 200);
    // a.erase(a.begin() + 2, a.end());
    for (int s : a)
    {
        cout << s << endl;
    }
    return 0;
}