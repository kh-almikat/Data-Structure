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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int sz = 0;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
        sz++;
    }

    if (sz % 2 == 0)  // EVEN
    {
        int mid1 = (sz / 2 - 1);
        Node *temp = head;
        for (int i = 0; i < mid1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
        cout << temp->next->val << endl;
    }
    else  // ODD
    {
        int mid = sz / 2; 
        Node *temp = head;
        for (int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }

}