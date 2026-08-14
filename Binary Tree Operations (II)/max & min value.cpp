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

        if(l == -1)
            f->left = NULL;
        else
            f->left = new Node(l);

        if(r == -1)
            f->right = NULL;
        else
            f->right = new Node(r);

        if(f->left)
            q.push(f->left);

        if(f->right)
            q.push(f->right);
    }

    return root;
}

// Maximum value
int max_value(Node* root)
{
    if(root == NULL)
        return INT_MIN;

    int l = max_value(root->left);
    int r = max_value(root->right);

    return max(root->val, max(l, r));
}

// Minimum value
int min_value(Node* root)
{
    if(root == NULL)
        return INT_MAX;

    int l = min_value(root->left);
    int r = min_value(root->right);

    return min(root->val, min(l, r));
}

int main()
{
    Node* root = input();

    cout << "Maximum: " << max_value(root) << endl;
    cout << "Minimum: " << min_value(root) << endl;

    return 0;
}