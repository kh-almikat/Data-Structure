#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l, ll;

    int x;
    while (true)
    {
        cin >> x;

        if (x == -1)
            break;

        l.push_back(x);
    }

    while (true)
    {
        cin >> x;

        if (x == -1)
            break;

        ll.push_back(x);
    }

    if (l == ll)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}