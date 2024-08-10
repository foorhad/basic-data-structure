#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) // O(sqrt(n))
    {
        if (n % i == 0)
        {
            cout << i << endl;
            // if (i != n / i)
            cout << n / i << endl;
        }
    }

    return 0;
}