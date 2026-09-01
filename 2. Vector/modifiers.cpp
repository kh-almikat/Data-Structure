#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {12,63,95,45,45};
    vector<int> vv;
    vector<int> s = {4,6,9,6};

    vv = v; // copy v into vv


    v.pop_back();


    // insert(position, value)
    vv.insert(v.begin() + 2, 100); //insert single value
    vv.insert(v.begin() + 2, s.begin(), s.end()); //insert multi value


    // erase(position)
    vv.erase(vv.begin() + 2); // delete single value
    vv.erase(vv.begin()+1, vv.begin()+4); // delete multi value


    replace(v.begin(), v.end(), 45 , 0); // sob 45 hoye jabe 0


}