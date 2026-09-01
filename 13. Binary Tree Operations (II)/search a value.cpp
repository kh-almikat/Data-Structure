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

bool search_node(Node* root, int x)
{
    if(root == NULL)
        return false;

    if(root->val == x)
        return true;

        
    bool l = search_node(root->left, x);
    bool r = search_node(root->right, x);


    if(l == true || r == true)
        return true;
    else
        return false;
}

int main()
{
    Node* root = input();

    int x;
    cin >> x;

    if(search_node(root, x))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}