#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * left;
        Node * right;
    Node(int v)
    {
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }
};
Node * input_btree()
{
    Node * root;
    int x; cin >> x;
    if(x == -1) root = NULL;
    else root = new Node(x);
    queue<Node *> q;
    if(root != NULL) q.push(root);
    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();

        Node * left, * right;
        int l, r; cin >> l >> r;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int count_height(Node * root)
{
    if(root == NULL) return 0;
    int l = count_height(root->left);
    int r = count_height(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node * root = input_btree();
    cout << count_height(root);
    return 0;
}