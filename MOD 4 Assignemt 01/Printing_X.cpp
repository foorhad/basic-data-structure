#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = n / 2;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == mid + 1 && col == mid + 1)
            {
                cout << "X";
            }
            else if (row == col)
            {
                cout << "\\";
            }
            else if (row + col == n + 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}