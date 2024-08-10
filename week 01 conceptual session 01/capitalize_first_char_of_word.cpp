#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        // s[i][0] -= 32;
        // int sz = ;
        s[i][s[i].size() - 1] -= 32;
        cout << s[i] << endl;
    }
    return 0;
}