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
    vector<int> presum(n);
    presum[0] = a[0];
    for (int i = 2; i < n; i++)
    {
        presum[i] = a[i - 1] + presum[i];
    }
    for (int e : a)
        cout << e <<endl;

    return 0;
}