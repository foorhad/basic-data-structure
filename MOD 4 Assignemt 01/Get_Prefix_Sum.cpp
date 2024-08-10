#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // prefixsum calculating
    long long int prefixsum[n];
    prefixsum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = a[i] + prefixsum[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefixsum[i] << " ";
    }

    return 0;
}