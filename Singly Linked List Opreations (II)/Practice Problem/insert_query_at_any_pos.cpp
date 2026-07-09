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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_any_pos(Node *&head, int idx, int val)
{

    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 2; i < idx - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
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
    tail = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int t;
    cin >> t;

    while(t--)
    {
        int idx, val;
        cin >> idx >> val;

        int size = size_of_linked_list(head);

        //INVALID
        if (idx > size || idx < 0)
            cout << "Invalid" << endl;

        // insert at head
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_linked_list(head);
        }

        // insert at tail
        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }

        // insert at any position
        else
        {
            insert_at_any_pos(head, idx, val);
            print_linked_list(head);
        }
    }
}