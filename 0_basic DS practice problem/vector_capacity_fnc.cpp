#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Initiaize a Vector:
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    // 2. Print initial Vector Properties:
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;
    cout << endl;

    // 3.Resize the Vector
    v.resize(20, 0);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << endl;

    // 4.Clear the Vector
    v.clear();
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << endl;

    // 5. check if the Vector is Empty
    cout << v.empty() << endl;
    cout << endl;

    // 6.Resize to Original Size:
    cout << "Original size: " << endl;
    v.resize(10, 100);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (int y : v)
    {
        cout << y << " ";
    }

    return 0;
}