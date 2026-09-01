#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int left = 0;
    int right = n - 1;

    int val;
    cin >> val;

    int flag = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if(a[mid] == val)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > val)
            right = mid - 1;

        else
            left = mid + 1;
    }

    if (flag == 1)
        cout << "found" << endl;
    
    else
        cout << "not found" << endl;
}