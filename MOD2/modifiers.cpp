#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 6, 33, 293, 120};
    v.pop_back(); // remove the last element
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    for (int a : v) // ranged based loop
    {
        cout << a << " ";
    }

    // vector<int> x = {56, 5, 23};
    // x = v; //assign another vector
    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout << x[i] << " ";
    // }

    return 0;
}