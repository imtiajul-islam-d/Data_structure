#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        this->val = v;
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    a.next = &b;
    // b.val = 20;

    // a.next = &b;
    // b.next = NULL;

    cout << a.val << endl;
    // cout << (*a.next).val << endl; // or
    cout << a.next->val << endl;
    return 0;
}