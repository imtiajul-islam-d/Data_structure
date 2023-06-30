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
void sort_linked_list(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
void print_middle(Node *head)
{
    if(size(head) == 1)
    {
        cout << head->val;
        return;
    }
    int count = 0;
    int flag = size(head) / 2;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        if (size(head) % 2 == 0)
        {
            if (flag == count || flag + 1 == count)
            {
                cout << tmp->val << " ";
            }
        }
        else
        {
            if (flag + 1 == count)
            {
                cout << tmp->val;
            }
        }
        tmp = tmp->next;
        }
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
    sort_linked_list(head);
    print_middle(head);
    return 0;
}