#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(a.begin(), a.end()); // O(NlogN)

    while (q--) // O(q)
    {
        int low = 0;
        int high = n - 1;
        int x;
        cin >> x;
        int flag = 0;
        while (low <= high) // O(logn)
        {
            int mid = (low + high) / 2;
            if (x == a[mid])
            {
                flag = 1;
                break;
            }
            if (a[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}