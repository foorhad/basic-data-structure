#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    vector<int> v(a, a + 5);
    for (int s : v)
    {
        cout << s << " ";
    }

    return 0;
}