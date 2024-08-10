#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {2, 3, 4, 3, 55, 3, 5, 3};
    replace(a.begin(), a.end() - 1, 3, 100);
    for (int s : a)
    {
        cout << s << " ";
    }
    return 0;
}