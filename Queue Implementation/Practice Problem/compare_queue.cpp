#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool same = true;

    if (st.size() != q.size())
    {
        same = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                same = false;
                break;
            }

            st.pop();
            q.pop();
        }
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}