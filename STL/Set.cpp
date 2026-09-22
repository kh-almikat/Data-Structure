#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // Set → stores unique values in sorted order
    set<int> s;

    // Insert
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // Iterator
    auto it = s.begin();
    it++;
    cout << *it << '\n';

    // Print
    for (auto value : s)
        cout << value << " ";
    cout << '\n';

    // Find
    it = s.find(25);

    if (it != s.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Erase
    s.erase(6);

    // Count
    cout << s.count(4) << '\n';

    // Lower bound
    int N;
    cin >> N;

    it = s.lower_bound(N);

    if (it == s.end())
        cout << "END\n";
    else
        cout << *it << '\n';

    // Upper bound
    it = s.upper_bound(N);

    if (it == s.end())
        cout << "END\n";
    else
        cout << *it << '\n';
}