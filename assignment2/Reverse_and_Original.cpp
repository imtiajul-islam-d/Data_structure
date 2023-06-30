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
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
void print_recursion(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    print_recursion(head->next);
}
void print_reverse_recursion(Node *head)
{
    if (head == NULL)
        return;
    print_reverse_recursion(head->next);
    cout << head->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
    }
    print_reverse_recursion(head);
    cout << endl;
    print_recursion(head);
    return 0;
}