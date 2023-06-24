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
void insert_at_any_position(Node *&head, int v, int position)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    if (position != 0)
    {
        int count = 0;
        while (tmp->next != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        if (count < position)
        {
            tmp = newNode;
        }
        else
        {
            Node *tmp2 = head;
            for (int i = 1; i < position - 1; i++)
            {
                tmp2 = tmp2->next;
            }
            Node *pos = tmp2->next;
            newNode->next = pos;
            tmp2->next = newNode;
        }
    }
    else
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
void print_linked_list(Node *head)
{
    cout << "Your linked list is: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option:1 for insert value" << endl;
        cout << "Option:2 for insert value" << endl;
        cout << "Option:3 for terminate the program" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please insert a value: ";
            int v;
            cin >> v;
            cout << "Insert the position: ";
            int p;
            cin >> p;
            insert_at_any_position(head, v, p);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
            break;
    }
    return 0;
}