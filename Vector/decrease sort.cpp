#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = { 3, 4, 5, 1, 2 };

    sort ( a.begin(), a.end(), greater<int>() ); 
    //greater<int>() -- big to small

    for ( auto u : a ) cout << u << " "; // 5 4 3 2 1
    cout << endl;




    vector<int> b = { 3, 4, 5, 1, 2 };

     sort ( b.rbegin(), b.rend() );
     
    for ( auto u : b ) cout << u << " "; //5 4 3 1 2
    cout << endl;
}


