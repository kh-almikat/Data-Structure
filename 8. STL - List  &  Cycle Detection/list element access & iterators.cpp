#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10,20,30,40,50,60,70};

    cout << l.back()<< endl;
    cout << l.front() << endl;

    cout << *next(l.begin(), 2) << endl;


    cout << *l.begin() << endl;
    //cout << *l.end() << endl; // use kora jabe na, end() last index r porer ghor e thakhe

}