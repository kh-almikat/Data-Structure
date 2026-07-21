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

bool is_same(Node *&head, Node *&head2)
{
   
    while(head != NULL)
    {
        if(head->val != head2->val)
            return false;

        head = head->next;
        head2 = head2->next;
    }

    return true;
}

    int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;

    int size = 0;
    while (1)
    {
        cin >> x;

        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);

        size++;
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int size2 = 0;
    while (1)
    {
        cin >> x;

        if (x == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, x);

        size2++;
    }

    if (size != size2)
        cout << "NO" << endl;
    
    else
    {
        if (is_same(head, head2))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}