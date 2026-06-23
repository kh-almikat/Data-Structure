#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    vector <int> v1 = { 2, 3, 4 };

    v.clear(); // clear the vector v

    cout << v.size() << endl; //0 -- size of vector v

    cout << v.empty() << endl; //1 -- empty-1 or not empty-0
    
    cout << v1.empty() << endl; //0
}


