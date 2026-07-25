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

class mystack
{
    public:
        Node *head = NULL;
        Node *tail = NULL;

        int size = 0;

        void push(int val)
        {
            size++;

            //insert at tail
            Node *newnode = new Node(val);

            if(head == NULL)
            {
                head == newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        void pop()
        {
            size--;

            //delete at tail
            Node *deletenode = tail;

            tail = tail->prev;
            delete deletenode;
            

            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            tail->next = NULL;
        }

        int top()
        {
            return tail->val;
        }

        int size()
        {
            return size;
        }

        bool empty()
        {
            if(head == NULL)
                return true;

            else
                return false;
        }

};

int main() 
{
    mystack st;

    st.push(12);
    st.push(45);
    st.push(89);
    

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;


    if(!st.empty()) 
        st.pop();
    
    if (!st.empty())
    {
        st.top();
    }
}