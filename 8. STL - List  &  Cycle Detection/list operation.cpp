#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10,20,30,10,50,10};

    l.remove(10); //list r all 10 remove



    // sort
    l.sort();  //ascending order
    l.sort(greater<int>()); //descending order



    // duplicate delete, only print unique value
    // tobe sort thakte hobe
    l.unique();


   
    l.reverse(); // list reverse print

}