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

Node* input()
{
    int val;
    cin >> val;

    Node* root;

    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;

    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myleft;
        Node* myright;

        if(l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if(r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        if(f->left)
            q.push(f->left);

        if(f->right)
            q.push(f->right);
    }

    return root;
}

void left(Node* root)
{
    if(root == NULL)
        return;

    if(root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }

    //first recursion, then print - bottom -> top
    if(root->left)
        left(root->left);
    else
        left(root->right);

    cout << root->val << " ";
}

void right(Node* root)
{
    if(root == NULL)
        return;

    if(root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }

    //first print, then recursion - top -> bottom
    cout << root->val << " ";

    if(root->right)
        right(root->right);
    else
        right(root->left);
}

int main()
{
    Node* root = input();

    if(root == NULL)
        return 0;

    // Left boundary: bottom -> top
    if(root->left)
        left(root->left);

    // Root
    cout << root->val << " ";

    // Right boundary: top -> bottom
    if(root->right)
        right(root->right);

    return 0;
}