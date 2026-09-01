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

class myQueue
{
    public:
        Node *head = NULL;
        Node *tail = NULL;

        int sz = 0;

        void push(int val)
        {
            sz++;

            Node *newnode = new Node(val);

            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }

            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        void pop()
        {
            sz--;

            Node *deletenode = head;

            head = head->next;
            delete deletenode;

            if(head == NULL)
            {
                tail = NULL;
                return;
            }

            head->prev = NULL;
        }

        int front()
        {
            return head->val;
        }

        int back()
        {
            return tail->val;
        }

        int size()
        {
            return sz;
        }

        int empty()
        {
            return head == NULL;
        }


};

int main() 
{
    
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;


    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }   
}