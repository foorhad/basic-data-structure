#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; //type 1
    // vector<int> v(5); //type 2
    // vector<int> v(6, 10);   //type 3
    // vector<int> v2(7, 3);    //type 3
    // vector<int> v(v2);   //type 3

    // int a[6] = {49, 5, 11, 2, 90, 86};
    // vector<int> v(a, a + 6);

    vector<int> v = {4, 5, 6, 7, 99, 100};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}