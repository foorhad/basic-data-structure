#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int old_val, new_val;
    cin >> old_val >> new_val;

    // replace
    replace(a.begin(), a.end(), old_val, new_val);
    for (int s : a)
        cout << s << " ";
    cout << endl;

    int find_val;
    cin >> find_val;
    auto it = find(a.begin(), a.end(), find_val);
    if (it != a.end())
    {
        cout << distance(a.begin(), it) << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}