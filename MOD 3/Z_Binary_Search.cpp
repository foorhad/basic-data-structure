#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)  //O(n)
    {
        cin >> a[i];
    }
    sort(a, a + n);  //O(nlogn)

    while (q--)    //O(q)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        int flag = false;
        while (l <= r)         //O(logn)
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
                r = mid_point - 1;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}