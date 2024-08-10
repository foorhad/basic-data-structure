#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int old_val, new_val;
    cin >> old_val >> new_val;
    int x;
    cin >> x;

    replace(a.begin(), a.end(), old_val, new_val);
    for (int e : a)
        cout << e << " ";
    cout << endl;

    auto it = find(a.begin(), a.end(), x);
    if (it == a.end())
        cout << -1 << endl;
    else
        cout << it - a.begin() << endl;

    return 0;
}