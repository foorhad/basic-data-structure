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
        string str = s[i];
        str[0] = str[0] - 32;
        // toupper(str[0]);/
        cout << str << endl;
    }

    return 0;
}