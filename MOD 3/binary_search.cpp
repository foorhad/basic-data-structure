#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) //O(N)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int flag = false;
    int l = 0;
    int r = n - 1;
    while (l <= r)          //O(N)
    {
        int mid_point = (l + r) / 2;
        if (a[mid_point] == x)
        {
            flag = true;
        }

        if (x > a[mid_point])
        {
            // go right side
            l = mid_point + 1;
        }
        else
        {
            // go left side
            r = mid_point - 1;
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}