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
Node * input_tree()
{
    Node * root;
    int x; cin >> x;
    if(x == -1) root = NULL;
    else root = new Node(x);
    queue<Node *> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * p = q.front();
        q.pop();
        
        Node * left , * right;
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
void print_level(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
Node * input()
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
void print_l(Node * root)
{
    if(root == NULL) return;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node * p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    
}
void print_o(Node * root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    print_o(root->left);
    print_o(root->right);
}
int main()
{
    Node * root = input_tree();
    print_o(root);
    return 0;
}