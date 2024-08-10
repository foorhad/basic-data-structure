#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q)
    {
        int x;
        cin >> x;
        auto it = find(a.begin(), a.end(), x);
        if (it != a.end())
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
        q--;
    }
    return 0;
}