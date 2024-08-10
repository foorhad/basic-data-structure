#include <bits/stdc++.h>
using namespace std;
vector<int> pre_sum(vector<int> a, int n)
{
    // int n = a.size();
    vector<int> b(n);
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i] + b[i - 1];
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> x = pre_sum(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}