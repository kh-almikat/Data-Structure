#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    cin.ignore();
    
    vector <string> v(n);

    for (int i = 0; i < n; i++)
    {
        //cin >> v[i];

        getline(cin, v[i]); // or age must cin.igrone use korte hobe
    }

    for (int i = 0; i < n; i++)
    {
        cout <<  v[i] << endl;;
    }

    return 0;
}