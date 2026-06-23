#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = { 1, 1, 2, 2, 2, 3, 3 };
    unique( a.begin(), a.end() );

    for ( auto u : a ) cout << u << " "; // 1 2 3 2 2 3 3
    cout << endl;





    vector <int> b = { 1, 1, 2, 2, 2, 3, 3 };
    // unique value size
    int n = unique( b.begin(), b.end() ) - b.begin();

    cout << n << endl; // 3

    for ( int i = 0; i < n; i++ ) cout << b[i] << " "; //1 2 3
    cout << endl;

}
