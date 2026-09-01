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

void delete_at_head(Node *&head)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}

void print_linked_list(Node *&head)
{
    Node *temp = head;

    while (temp != head)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

    delete_at_head(head);
    print_linked_list(head);
}