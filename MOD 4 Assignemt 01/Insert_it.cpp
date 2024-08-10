#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int x;
    cin >> x;

    // insert whole
    a.insert(a.begin() + x, b.begin(), b.end());
    for (int e : a)
        cout << e << " ";

    return 0;
}