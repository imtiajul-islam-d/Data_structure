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
Node * convert(int l, int r, int a[])
{
    if(r < l) return NULL;
    int mid = (l + r) / 2;
    Node * root = new Node(a[mid]);
    Node * leftRoot = convert(l, mid - 1, a);
    Node * rightRoot = convert(mid + 1, r, a);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    int l = 0, r = n - 1;
    int mid = (l + r) / 2;
    Node * root = new Node(a[mid]);
    Node * leftRoot = convert(l, mid -1, a);
    Node * rightRoot = convert(mid+1,r, a);
    root->left = leftRoot;
    root->right = rightRoot;
    level_order(root);
    return 0;
}