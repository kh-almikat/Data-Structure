#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = { 3, 5, 4, 1, 2 };
    sort ( a.begin(), a.end() ); 

    for ( auto u : a ) cout << u << " "; //1 2 3 4 5
    cout << endl;


    vector<int> b = { 3, 5, 4, 1, 2 };
     sort ( b.begin(), b.begin() + 3 ); 

    for ( auto u : b ) cout << u << " "; //3 4 5 1 2 
    cout << endl;


    vector<int> c = { 4, 5, 3, 1, 2 };
     sort ( c.begin() + 1, c.begin() + 3 ); 

    for ( auto u : c ) cout << u << " "; //4 3 5 1 2 
    cout << endl;
}