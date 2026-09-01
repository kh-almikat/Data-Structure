#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s, ss;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        s.push(x);
    }

    while(!s.empty())
    {
        ss.push(s.top());
        s.pop();
    }

    while(!ss.empty())
    {
        cout << ss.top() << " ";
        ss.pop();
    }
}