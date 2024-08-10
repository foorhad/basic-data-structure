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
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     swap(a[i], a[j]);
    //     i++;
    //     j--;
    // }
    reverse(a.begin(), a.end());
    for (int e : a)
    {
        cout << e << " ";
    }

    return 0;
}