#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    // cout << a.max_size() << endl;
    cout << a.capacity() << endl;
    a.push_back(58);
    a.push_back(51);
    a.push_back(59);
    a.push_back(50);
    a.push_back(66);
    cout << a.capacity() << endl;
    a.clear();
    // a.resize(3);
    // a.resize(7, 96);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << a[1] << endl;

    return 0;
}
