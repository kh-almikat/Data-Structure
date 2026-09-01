#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> pre(n + 1);
    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i]; //prefix sum formula
    }

    int l, r;
    cin >> l >> r;

    int sum;

    if (l == 1)
        sum = pre[r];
    
    else
        sum = pre[r] - pre[l - 1];

    cout << sum << endl;
}