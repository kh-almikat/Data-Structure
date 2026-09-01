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

    ll = l;

    l.reverse();

    if(ll == l)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
}