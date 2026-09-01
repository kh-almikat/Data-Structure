#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> vv;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vv.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
        ;
    }
}