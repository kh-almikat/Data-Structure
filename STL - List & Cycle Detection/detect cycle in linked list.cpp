/*
    Slow and Fast Pointer algorithm
    Tortoise and Hare algorithm
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a; // create cycle

    Node *slow = head;
    Node *fast = head;
    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;       // move 1 step
        fast = fast->next->next; // move 2 step

        // cycle detect
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Cycle ase" << endl;
    else
        cout << "Cycle nai" << endl;
}