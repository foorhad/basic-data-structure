#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        // string a;
        // cin >> a;
        // s.push_back(a);
        cin >> s[i];
    }
    for (string val : s)
    {
        cout << val << endl;
    }

    return 0;
}