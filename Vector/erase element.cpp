#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>  a = { 3, 4, 5, 1, 2 };
    cout << *a.begin() << endl; //3-- print first element


    a.erase( a.begin() ); 
    for ( auto u : a ) cout << u << " "; //4 5 1 2
    cout << endl;

    
    a.erase( a.begin()+2 );
    for ( auto u : a ) cout << u << " "; //4 5 2
    cout << endl;
}
