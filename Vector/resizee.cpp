#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v= { 1, 2, 3, 4, 5 };

    v.resize(10); // resize the vector v to size 10

    
    cout << v.size() << endl; /// 10
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " "; 
    /// 1 2 3 4 5 0 0 0 0 0
    cout << endl;

}