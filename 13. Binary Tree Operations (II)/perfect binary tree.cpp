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

        Node *myleft, *myright;

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

int count_node(Node* root)
{
    if(root == NULL)
        return 0;

    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1;
}

int max_depth(Node* root)
{
    if(root == NULL)
        return 0;
    if (root->left == NULL &&root->right == NULL)
        return 0;

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l, r) + 1;
}

int main() 
{
    Node *root = input();

    
    /* Total number of nodes = 2^(height + 1) - 1 */
    int total_node = pow(2, max_depth(root) + 1) - 1;


    if (total_node == count_node(root))
        cout << "YES" << endl;
    else
        cout << "NO";
}
