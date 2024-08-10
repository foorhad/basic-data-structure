#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n>>q;
    int a[n];
    for (int i = 0; i < n; i++) //O(N)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    while (q--)   //0(q)
    {
        int flag = false;
        for (int i = 0; i < n; i++)   //O(N)
        {
            if (a[i] == x)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
        
    

    return 0;
}