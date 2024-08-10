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
    vector<int> prefixsum(n);
    prefixsum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = a[i] + prefixsum[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int sum = 0;
        if (l == 0)
        {
            sum = prefixsum[r];
        }
        else
        {
            sum = prefixsum[r] - prefixsum[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}