#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = { 45,63,98,125,478,58};

    cout << v[2] << endl;
    
    //last element
    cout << v.back() << endl;
    cout << v[v.size()-1] << endl;

    //first element
    cout << v.front() << endl;
    cout << v[0] << endl;


    return 0;
}