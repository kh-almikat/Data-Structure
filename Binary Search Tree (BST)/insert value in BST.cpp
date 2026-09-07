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

Node *input()
{
    int val;
    cin >> val;

    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        // first step
        Node *f = q.front();
        q.pop();

        // second step
        int l, r;
        cin >> l >> r;

        Node *myleft, *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        // third step
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

/*
    time com-
    1 node - O(h)  h--height
    n node - O(nh)
*/
void insert(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);

    if (root->val > val) // left side
    {
        if (root->left == NULL)
            root->left = new Node(val); // val insert

        else
            insert(root->left, val); // recursion called
    }
    else // right side
    {
        if (root->right == NULL)
            root->right = new Node(val); // val inseert

        else
            insert(root->right, val); // recursion called
    }
}

int main()
{
    Node *root = input();

    int val;
    cin >> val;

    insert(root, val);
    level_order(root);
}