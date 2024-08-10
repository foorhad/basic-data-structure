#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {3, 2, 1, 20, 46};
    // a.erase(a.begin() + 2); //delete single element
    // a.erase(a.begin() + 2, a.begin() + 4); // delelte multiple value
    a.erase(a.begin() + 2, a.end() - 1); // delelte multiple value

    for (int s : a)
    {
        cout << s << " ";
    }
    return 0;
}