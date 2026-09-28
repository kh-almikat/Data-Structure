#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int sum = a[l] + a[r];

        if (sum == target)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if (sum < target)
            l++;
        else
            r--;
    }

    cout << "NO" << endl;

}