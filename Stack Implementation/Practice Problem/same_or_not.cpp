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

    int nn;
    cin >> nn;
    while (nn--)
    {
        int x;
        cin >> x;

        ss.push(x);
    }

    bool flag = false;

    if (s.size() != ss.size())
        cout << "NO" << endl;

    else
    {
        while (!s.empty())
        {
            if (s.top() != ss.top())
            {
                flag = true;
                break;
            }

            s.pop();
            ss.pop();
        }

        if (flag)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }
}