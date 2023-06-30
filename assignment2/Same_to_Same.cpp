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
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
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
void print_result(Node *head, Node *head2)
{
    if (size(head) != size(head2))
    {
        cout << "NO";
        return;
    }
    bool flag = true;
    Node *tmp = head;
    Node *tmp2 = head2;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
    }
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head2, tail2, v);
    }
    print_result(head, head2);
    return 0;
}