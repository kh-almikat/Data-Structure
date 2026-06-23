#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int a;
    vector<int> v;
    cin >> a;

    // input
    for(int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // print
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}