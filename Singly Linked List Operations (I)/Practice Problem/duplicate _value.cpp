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

void duplicate_value_check(Node *head)
{
    int fre[101] = {0};

    Node *temp = head;

    while (temp != NULL)
    {
        fre[temp->val]++;
        temp = temp->next;
    }

    bool flag = false;

    for (int i = 0; i <= 100; i++)
    {
        if (fre[i] > 1)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Duplicate value found\n";
    else
        cout << "Not found\n";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    duplicate_value_check(head);

    return 0;
}