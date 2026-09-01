#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL) // sortcut- if (f->left)
            q.push(f->left);

        if (f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    /*

         10
        /  \
      20    30
     /     /  \
   40     50   60

    */

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    level_order(root);
}