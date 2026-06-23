#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = { 3, 4, 5, 1, 2 };

    reverse( a.begin(), a.end() );

    for ( auto u : a ) cout << u << " "; // 2 1 5 4 3
    cout << endl;
}
