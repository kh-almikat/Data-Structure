#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {12,63,95,45,45};
    vector<int> w;
    vector<int> s = {4,6,9,6};


    //w.insert(w.begin() + 2, 100);
    //insert diya multi value o dukano jay
    //w.insert(w.begin() + 2, s.begin(), s.end());
    

    //w.erase(w.begin() + 2);
    //w.erase(w.begin()+1, w.begin()+4); // khali first r last thakbe


    //replace(w.begin(), w.end(), 45 , 0); // sob 45 hoye jabe 0


    //auto it = find(w.begin(), w.end(), 100 ); //paile sei iterator dey naile end() 
    //index lage manual ber korte hobe

    for (auto x : w)
    {
        cout << x << endl;
    }
    
    return 0;
}