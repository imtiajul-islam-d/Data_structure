#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int v)
    {
        this->val = v;
        this->next = NULL;
        this->prev = NULL;
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
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
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
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_any_position(Node *&head, Node *&tail, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next = newNode;
    newNode->next->prev = newNode;
}
void delete_from_any_position(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;

    if (size(head) == 0)
    {
        cout << "Your list is blank!" << endl;
        return;
    }
    if (size(head) < pos)
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos < 2)
    {
        // prob
        if (size(head) == 1)
        {
            Node *deleteNode = head;
            head = NULL;
            tail = NULL;
            delete deleteNode;
            return;
        }
        // prob
        else
        {
            Node *deleteNode = head;
            head = head->next;
            head->prev = NULL;
            delete deleteNode;
            return;
        }
    }
    else if (pos == size(head))
    {
        Node *deleteNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete deleteNode;
        return;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp;
        tmp->next->prev = tmp->prev;
        tmp->prev->next = tmp->next;
        delete deleteNode;
    }
}
void print_straight(Node *head)
{
    Node *tmp = head;
    cout << "List is: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "List is: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node *head = new Node(10);
    // Node *tail = head;
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *tail = d;
    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;
    // c->next = d;
    // d->prev = c;

    // insert_at_head(head, tail, 100);
    // insert_at_any_position(head, tail, 1, 100);
    // insert_at_tail(head, tail, 100);
    // delete_from_any_position(head, tail, 1);
    // cout << size(head) << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }

    print_straight(head);
    print_reverse(tail);
    // while (true)
    // {
    //     cout << "Option 1: Insert at head." << endl;
    //     cout << "Option 2: Insert at any position." << endl;
    //     cout << "Option 4: Print straight." << endl;
    //     cout << "Option 5: Print reverse." << endl;
    //     cout << "Option 6: Break the program." << endl;
    //     // cout << "Size is: " << size(head) << endl;
    //     int op;
    //     cout << "Enter: ";
    //     cin >> op;
    //     if (op == 6)
    //     {
    //         break;
    //     }
    //     if (op == 1)
    //     {
    //         int v;
    //         cout << "Please enter value: ";
    //         cin >> v;
    //         insert_at_head(head, tail, v);
    //     }
    //     if (op == 2)
    //     {
    //         int v, pos;
    //         cout << "Please enter value: ";
    //         cin >> v;
    //         cout << "Please enter a position: ";
    //         cin >> pos;
    //         if (size(head) == pos)
    //         {
    //             insert_at_tail(head, tail, v);
    //         }
    //         else if (size(head) > pos)
    //         {
    //             insert_at_any_position(head, tail, pos, v);
    //         }
    //     }
    //     // if (op == 3)
    //     if (op == 4)
    //     {
    //         print_straight(head);
    //     }
    //     if (op == 5)
    //     {
    //         print_reverse(tail);
    //     }
    // }

    return 0;
}