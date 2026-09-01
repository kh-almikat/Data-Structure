#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(7);
    v.push_back(3);

    //v.resize(10, -1);
    //v.clear(); // but just size = 0 kore but value clear na

    cout << v.size() << endl;
    cout << v.capacity() << endl;

}