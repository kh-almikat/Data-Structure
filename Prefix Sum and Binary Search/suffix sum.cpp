#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> suf(n + 1);
    suf[n] = v[n];

    for (int i = n - 1; i >= 1; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << suf[i] << endl;
    }
    return 0;
}