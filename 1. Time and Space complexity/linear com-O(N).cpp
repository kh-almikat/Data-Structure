#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; // -----O(1)
    cin >> n; // -----O(1)

    for (int i = 0; i < n; i++) // -----O(n)
    {
       cout << i << " ";
    }

    cout << endl; // -----O(1)

    for (int i = 0; i < n; i= i +2) //-----O(n)
    {
        cout << i << " ";
    }
    

    return 0; // -----O(1)
}

// total time complexity = O(1) + O(1) + O(n) + O(1) + O(n) + O(1) = O(n)