#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = { 1, 2, 3, 4, 5 };

    cout << a.back() << endl; //5 -- prient last element 
    
    a.pop_back(); // erase last element

    
    cout << a.back() << endl; // 4
}   