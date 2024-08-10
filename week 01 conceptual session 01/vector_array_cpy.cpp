#include <bits/stdc++.h>
using namespace std;

int main()
{
    //===Method 01===

    int a[] = {2, 4, 5, 6};
    int sze = sizeof(a) / sizeof(int);
    vector<int> b(a, a + sze);
    // for (int e : b)
    //     cout << e << endl;

    //===Method 01====
    vector<int> c(b); // vector copy from another vector
    for (int e : c)
        cout << e << endl;

    return 0;
}