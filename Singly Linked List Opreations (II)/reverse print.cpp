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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void reverse_print(Node *&head)
{
    Node *temp = head;

    if (temp == NULL)
        return;

    reverse_print(temp->next); // funshon call 
    cout << temp->val << " ";  // 5 4 3 2 1

    /*
    cout << temp->val <<" "; // 1 2 3 4 5
    reverse_print(temp->next);
    */
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
            break;

        insert_at_tail(head, tail, val);
    }

    reverse_print(head);
}