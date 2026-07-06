#include <bits/stdc++.h>
using namespace std;


// void fun(int* p){

//     // *x = 100;

//     int y  = 200;
//     p = &y;


// }


void fun(int* &p){

    // *x = 100;

    int y  = 200;
    p = &y;

    cout << *p << endl;

}



int main()
{
    int x = 10;
    int* p = &x;
    fun(p);

    cout << *p << endl;
    return 0;
}

// p cng kore sisi function er modde but main function er p cng hobe na