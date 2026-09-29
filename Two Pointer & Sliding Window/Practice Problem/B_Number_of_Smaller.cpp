/*problem link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0, count = 0;
    while(r < m)
    {
        if(a[l] < b[r] && n > l)
        {
            count++;
            l++;
        } 
        else
        {
            cout << count << " ";
            r++;
        }  
    }
}