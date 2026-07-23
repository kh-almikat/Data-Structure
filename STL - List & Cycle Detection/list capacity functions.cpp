#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l(10,3);

    cout << l.size() << endl;

    l.clear(); // clear element in list
    cout << l.size() << endl;



    l.empty(); //IF list empty - true(1), otherwise - false(0)


    l.resize(5); //resize the list size

}