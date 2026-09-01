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

void insert_at_tail(Node* &head, Node* &tail, int val){


    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    tail = tail->next;

}

int main()
{
    int val, size = 0;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
        size++;
    }

    cout << size; // print size
}