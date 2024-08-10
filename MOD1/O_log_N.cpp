#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i;
    cin >> n;
    // for (i = 1; i < n; i *= 2) //O(log(n))
    // {
    //     cout << i << endl;
    // }

    while (n > 0) // O(log(n))
    {
        int digit = n % 10;
        cout << digit << endl;
        n /= 10;
    }

    return 0;
}