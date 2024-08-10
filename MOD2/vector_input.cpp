#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //     // cin >> v[i];
    // }
    // for (int s : v)
    // {
    //     cout << s << " ";
    // }

    // second way
    int n;
    cin >> n;
    vector<int> a(n); // vector array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int s : a)
    {
        cout << s << " ";
    }

    return 0;
}