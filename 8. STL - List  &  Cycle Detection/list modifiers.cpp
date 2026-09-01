#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10,20,30,40,50};
    list <int> l2;


    l2 = l; // l value l2 assign
    l2.assign(l.begin(), l.end()); // l value l2 assign



    l.push_front(0);  // insert at head
    l.push_back(100);  // insert at tail



    l.pop_front();  // delete at head
    l.pop_back();  // delete at tail



    cout << *next(l.begin(),1);  // access specific index



    // insert at any position
    l.insert(next(l.begin(), 2), 233); // (index,value)
    l.insert(next(l.begin(), 2), l2.begin(), l2.end()); //list-l2 all value list-l e insert



    l.erase(next(l.begin(), 2)); //erase specific index
    l.erase(next(l.begin(),1), next(l.begin(),3)); //erase multiple value

    

    replace(l.begin(), l.end(), 20, 56); // (replace area, replace value, updated value)

    

    //find
    auto it = find(l.begin(), l.end(),20);
    if (it == l.end()) // If the element is not found, the iterator will be v.end().
    {
        cout << "NOT FOUND";
    }
    else{

        cout << "FOUND";
    }
 
}