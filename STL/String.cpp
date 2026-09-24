#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    // Access
    cout << s[0] << '\n';
    cout << s.at(1) << '\n';

    // First & last character
    cout << s.front() << " " << s.back() << '\n';

    // Size
    cout << s.size() << '\n';
    cout << s.length() << '\n';

    // Add
    s.push_back('!');
    s += " world";

    // Remove last character
    s.pop_back();

    // Insert
    s.insert(5, " C++");

    // Erase
    s.erase(5, 4);

    // Substring
    cout << s.substr(0, 5) << '\n';

    // Find
    cout << s.find("world") << '\n';

    // Reverse
    reverse(s.begin(), s.end());

    // Sort
    sort(s.begin(), s.end());

    // Clear
    s.clear();

    // Empty check
    if (s.empty())
        cout << "Empty";

    return 0;
}