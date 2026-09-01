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

    Node *root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myleft,*myright;

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

vector<int> v;
void leaf_node(Node* root)
{
    if(root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        return;
    }

    leaf_node(root->left);
    leaf_node(root->right);

    
}

int main() 
{
    Node *root = input();
    leaf_node(root);

    sort(v.begin(), v.end()); // emni e

    for(auto x : v)
    {
        cout << x << " ";
    }
}
