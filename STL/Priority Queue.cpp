#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Max Heap → largest value first
    priority_queue<int> maxHeap;

    // Min Heap → smallest value first
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // push() → Insert element
    maxHeap.push(5);
    maxHeap.push(2);
    maxHeap.push(1);
    maxHeap.push(3);

    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(1);
    minHeap.push(3);

    // top() → Get top element
    cout << "Max Top: " << maxHeap.top() << '\n';
    cout << "Min Top: " << minHeap.top() << '\n';

    // size() → Number of elements
    cout << "Max Size: " << maxHeap.size() << '\n';
    cout << "Min Size: " << minHeap.size() << '\n';

    // pop() → Remove top element
    maxHeap.pop();
    minHeap.pop();

    // empty() → Check if empty
    cout << "Max Empty: " << maxHeap.empty() << '\n';
    cout << "Min Empty: " << minHeap.empty() << '\n';

    return 0;
}