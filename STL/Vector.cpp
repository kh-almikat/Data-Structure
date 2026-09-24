#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    // Add element at end
    v.push_back(10);

    // Remove last element
    v.pop_back();

    // Number of elements
    cout << v.size() << '\n';

    // First element
    cout << v.front() << '\n';

    // Last element
    cout << v.back() << '\n';

    // Check if empty
    cout << v.empty() << '\n';

    // Remove all elements
    v.clear();


    // Create vector with n elements
    vector<int> a(n);

    // Create vector with same value
    vector<int> b(n, 5);


    // Add elements
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }


    // First element iterator
    auto it = v.begin();

    // Last element + 1
    auto end = v.end();

    // Access iterator value
    cout << *it << '\n';


    // Sort ascending
    sort(v.begin(), v.end());

    // Sort descending
    sort(v.rbegin(), v.rend());


    // Reverse vector
    reverse(v.begin(), v.end());


    // Minimum element iterator
    auto mn = min_element(v.begin(), v.end());

    // Maximum element iterator
    auto mx = max_element(v.begin(), v.end());

    // Minimum value
    cout << *mn << '\n';

    // Maximum value
    cout << *mx << '\n';


    // Maximum element index
    int pos = mx - v.begin();

    cout << pos << '\n';


    // Resize vector
    v.resize(10);

    // Assign n elements with same value
    v.assign(n, 0);


    // Print using normal loop
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << '\n';


    // Print using range-based loop
    for (auto x : v)
        cout << x << " ";

    cout << '\n';


}