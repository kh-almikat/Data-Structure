/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, q;
    cin >> n >> q;

    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<long long> pre(n + 1);
    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        long long sum;

        if (l == 0)
            sum = pre[r];

        else
            sum = pre[r] - pre[l - 1];

        cout << sum << endl;
    }
}