#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    stack <int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
       int x;
       cin >> x;
       q.push(x);
    }
    
    while (!q.empty())
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }

    while (!st.empty())
    {
        int x = st.top();
        q.push(x);
        st.pop();
    }
    
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
}