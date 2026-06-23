#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;  // vector declared
    //vector<int> v={1,2 3,4,5};
    // vector<int> v(5); -- like array
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    cout<<v[0]<<"  "<<v[1]<<"  "<<v[2]<< endl; // 123

    v[1]=0;
    cout<<v[0]<<"  "<<v[1]<<"  "<<v[2]<< endl; // 102


}