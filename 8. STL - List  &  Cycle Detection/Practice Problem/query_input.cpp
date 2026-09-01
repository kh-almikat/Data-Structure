#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    list<int> l, ll;

    while(t--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx <= l.size())
        {
           l.insert(next(l.begin(),idx),val);
        }
        else
        {
            cout << "Invalid" << endl;
            continue;
        }

        for(auto x: l)
            cout << x << " ";

        cout << endl;

        ll = l;

        ll.reverse();

        for(auto x: ll)
            cout << x << " ";

        cout << endl;
    }
}