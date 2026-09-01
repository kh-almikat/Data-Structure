#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

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
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *tmp = head;

    for (int i = 1; i < idx; i++)
        tmp = tmp->next;

    Node *newnode = new Node(val);

    newnode->next = tmp->next;
    newnode->prev = tmp;

    tmp->next->prev = newnode;
    tmp->next = newnode;
}

int size_of_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = size_of_linked_list(head);

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_linked_list(head);
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
            print_linked_list(head);
        }
    }

    return 0;
}