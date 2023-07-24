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
int main()
{
    Node * root = input_tree();
    if(binary_search(root, 13)) cout << "FOUND";
    else cout << "NO";
    return 0;
}