#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> ml;

    // Input & insert
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    // Iterator
    auto it = ml.begin();
    it++;
    cout << *it << '\n';

    // Print
    for (auto value : ml)
        cout << value << " ";
    cout << '\n';

    // Find
    it = ml.find(15);

    if (it != ml.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Erase all occurrences
    ml.erase(6);

    // Erase one occurrence
    it = ml.find(9);

    if (it != ml.end())
        ml.erase(it);

    // Count
    cout << ml.count(9) << '\n';

    // Lower bound
    int N;
    cin >> N;

    it = ml.lower_bound(N);

    if (it == ml.end())
        cout << "END\n";
    else
        cout << *it << '\n';

    // Upper bound
    it = ml.upper_bound(N);

    if (it == ml.end())
        cout << "END\n";
    else
        cout << *it << '\n';

    // Print
    for (auto value : ml)
        cout << value << " ";
    cout << '\n';

    return 0;
}