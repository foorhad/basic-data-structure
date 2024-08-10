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

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[i] = 1;
        }
        if (a[i] < 0)
        {
            a[i] = 2;
        }
    }
    for (int e : a)
    {
        cout << e << " ";
    }

    return 0;
}