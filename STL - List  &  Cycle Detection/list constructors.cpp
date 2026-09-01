#include <bits/stdc++.h>
using namespace std;
int main()
{
    //list <int> l;
    //list <int> l(3);
    list <int> l(5,3);

    cout << l.size() << endl;

    //list l[0] index acess kora jay na

    cout << *l.begin() <<endl; 



    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    

    for (auto i : l)
    {
        cout << i << endl;
    }
    


    list <int> l = {1,2,3,4,5};
    list <int> ll(l);  // copy list-l element into list-ll


    int a[] = {1,2,3,4};
    list <int> ll(a,a+4);  //copy array-a element into list-ll



    vector <int> v ={1,2,3,4,5};
    list <int> ll(v.begin(), v.end());  //copy vector-v element into list-ll


}