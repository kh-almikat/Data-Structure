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
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_at_any_pos(Node *&head, Node* &tail, int idx)
{
    Node *temp = head;
    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deletenode = temp->next;

    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deletenode;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    tail->prev = a;
    a->prev = head;

    delete_at_any_pos(head, tail, 1);
    print(head);
}