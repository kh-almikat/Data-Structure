#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int main() 
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);


    /*
        root(10)
        /      \
     a(20)    b(30)
      /       /   \
   c(40)   d(50)  e(60)

    */

    root->left = a;
    root->right =b;

    a->left = c;

    b->left = d;
    b->right = e;

}
