#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Map
    map<int, int> mp; // (key , value)

    // Insert / update value
    mp[10] = 20;
    mp[2] = 12;
    mp[10] = 15; // 10 key - value update
    mp[8] = 22;
    mp[17] = 7;
    mp[5] = 9;

    // Access value
    cout << mp[10] << '\n';
    cout << mp[2] << '\n';

    // Print key and value
    for (auto it : mp)
    {
        int key = it.first;
        int value = it.second;

        cout << key << " -> " << value << '\n';
    }

    // Find a key
    auto it = mp.find(8);

    if (it == mp.end())
        cout << "Key not found\n";
    else
        cout << it->first << " " << it->second << '\n';

    // Erase by key
    mp.erase(8);

    // Erase using iterator
    it = mp.find(10);

    if (it != mp.end())
        mp.erase(it);

    // Add new key-value
    mp[6] = 49;

    // Print map
    for (auto it : mp)
        cout << it.first << " -> " << it.second << '\n';

    // Upper Bound - greater than 5
    it = mp.upper_bound(5);

    if (it != mp.end())
        cout << it->first << " " << it->second << '\n';

    // Lower bound - equal or greater than 5
    it = mp.lower_bound(5);

    if (it != mp.end())
        cout << it->first << " " << it->second << '\n';
}