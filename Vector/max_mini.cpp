#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> a = { 2, 3, 1, 5 };
     // max element index
    cout << max_element( a.begin(), a.end() ) - a.begin() << endl; //3
    // max element value
    cout << *max_element( a.begin(), a.end() ) << endl; //5



     vector<int> b = { 2, 3, 1, 5 };
     // mini element index
    cout << min_element( b.begin(), b.end() ) - b.begin() << endl; //2
    // mini element value
    cout << *min_element( b.begin(), b.end() ) << endl; //1

}