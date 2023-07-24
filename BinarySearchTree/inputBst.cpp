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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
bool binary_search(Node * root, int n)
{
    if(root == NULL) return false;
    if(root->val == n) return true;
    if(n > root->val)
    {
        bool l = binary_search(root->right, n);
        return l;
    }
    else 
    {
        bool r = binary_search(root->left, n);
        return r;
    };
}
void insert(Node*& root, int n)
{
    if(root == NULL)
    {
        root = new Node(n);
        return;
    }
    if(n > root->val)
    {
        if(root->right == NULL) root->right = new Node(n);
        else insert(root->right, n);
    }
    if(n < root->val)
    {
        if(root->left == NULL) root->left = new Node(n);
        else insert(root->left, n);
    }
}
int main()
{
    Node * root = input_tree();
    int x; cin >> x;
    insert(root, x);
    level_order(root);
    return 0;
}