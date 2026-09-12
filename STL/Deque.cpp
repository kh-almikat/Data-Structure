#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq(n);

    // Input
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    // Add/remove from front and back
    dq.push_front(8);
    dq.push_front(2);

    dq.pop_front();
    dq.pop_back();

    // Print deque
    for (auto value : dq)
        cout << value << " ";
    cout << '\n';

    // First and last value
    cout << dq.front() << " " << dq.back() << '\n';

    return 0;
}