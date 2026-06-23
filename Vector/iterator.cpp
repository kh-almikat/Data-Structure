#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> a = {2, 3, 4, 0, 0};

     vector<int>::iterator it;

    for ( it = a.begin(); it != a.end(); it++ ) 
    cout << *it << " "; /// 2 3 4 0 0
    cout << endl;
}