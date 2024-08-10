#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, 22, 1, 5, 33};
    // cout << a[a.size() - 1];
    // cout << a.back() << endl;  //usefull
    // cout << a[0] << endl;       //usefull
    // cout << a.front() << endl;

    // vector<int>::iterator it;
    for (auto it = a.begin(); it < a.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}