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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int size_of_SLL(Node *head)
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


    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

   

    if (size_of_SLL(head) == size_of_SLL(head1))
    {
        bool flag = false;
        while (head != NULL)
        {
            if(head->val != head1->val)
            {
                flag = true;
                break;
            }
            head = head->next;
            head1 = head1->next;
        }

        if(flag)
            cout << "SORTED" << endl;
        else
            cout << "NOT SORTED" << endl;
    }
    else
    {
        cout << "NOT SORTED" << endl;
    }

}

