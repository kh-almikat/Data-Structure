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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool isPalindrome(Node *head, Node *tail)
{
    while (head != tail && head->prev != tail)
    {
        if (head->val != tail->val)
            return false;

        head = head->next;
        tail = tail->prev;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;

    while (cin >> x && x != -1)
    {
        insert_at_tail(head, tail, x);
    }

    if (isPalindrome(head, tail))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;


}