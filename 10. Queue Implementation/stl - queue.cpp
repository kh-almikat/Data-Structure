#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;

    q.push(10);
    q.push(30);

    // pop e  top/front er age must check kora faka ase kina

    if (!q.empty())
    {
        q.pop();
    }
    
    if (!q.empty())
    {
        cout << q.front() << endl;
    }
    
    



    return 0;
}