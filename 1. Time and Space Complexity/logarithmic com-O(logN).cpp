#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; // -----O(1)
    cin >> n; // -----O(1)

    for (int i = 1; i < n; i *= 2) // -----O(log n)
    {
       cout << i << endl;
    }

    return 0; // -----O(1)
}
//total --- O(log n) 