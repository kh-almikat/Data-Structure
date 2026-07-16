#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* next;
    Node* prev;


    Node(int val){

        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }

};

void insert_at_any_position(Node* head, int ind, int val){

    Node* newnode = new Node(val);

    Node* temp = head;
    for (int i = 1; i < ind; i++)
    {
        temp = temp->next;
    }
    
    newnode->next = temp->next;
    newnode->prev = temp;

    temp->next->prev = newnode;
    temp->next = newnode;
}

void print(Node* head){


    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    cout << endl;

}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;


    insert_at_any_position(head, 1,100);
    insert_at_any_position(head, 2,200);
    print(head);

    return 0;
}