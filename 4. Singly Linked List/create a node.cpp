#include <bits/stdc++.h>
using namespace std;

class Node // create a node class
{
    public:
        int val; // value 
        Node *next; // address
};

int main() 
{
    Node a, b, c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;  // 10
    cout << a.next->val << endl;  // 20
    cout << a.next->next->val << endl;  // 30
}