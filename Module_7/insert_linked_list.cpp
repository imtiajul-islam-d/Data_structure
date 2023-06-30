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
void insert_at_head(Node *&head, int v) // O(1)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int v) // O(1)
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
void insert_any_position(Node *&head, int p, int v) // O(n)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < p - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print_linked_list(Node *head) // O(n)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << "No list found!!" << endl;
        return;
    }
    cout << "List is: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_linked_list(Node *&head, Node *&tail, int p)
{
    Node *tmp = head;
    cout << "List size is: " << size(head) << endl;
    if (tmp == NULL)
    {
        cout << "List is empty! Please insert a value first" << endl;
        return;
    }
    if (p > size(head) || p < 1)
    {
        cout << "Please enter a valid position" << endl;
        return;
    }
    if (p == 1)
    {
        if (size(head) == 1)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        head = head->next;
    }
    if (p < size(head) && p != 1)
    {
        if (p == 2)
        {
            tmp->next = tmp->next->next;
            return;
        }
        for (int i = 1; i < p - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << "sk" << endl;
        tmp->next = tmp->next->next;
    }
    if (p == size(head))
    {
        if (p == 2)
        {
            tmp->next = NULL;
            tail = tmp;
            return;
        }
        for (int i = 1; i < p - 1; i++)
        {
            tmp = tmp->next;
        }

        tmp->next = NULL;
        tail = tmp;
    }
}
void print_recursion(Node * head)
{
    if(head == NULL) return;
    cout << head->val << " ";
    print_recursion(head->next);
}
void print_reverse_recursion(Node * head)
{
    if(head == NULL) return;
    print_reverse_recursion(head->next);
    cout << head->val << " ";
}
int main() // O(n)
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout << "Option 1: To insert value" << endl;
        cout << "Option 2: To terminate the program" << endl;
        cout << "Option 3: Print linked list" << endl;
        cout << "Option 4: Delete linked list" << endl;
        cout << "Option 5: Insert linked list" << endl;
        cout << "Option 6: Print recursion" << endl;
        cout << "Option 7: Print reverse recursion" << endl;

        cout << "Enter: ";
        int op;
        cin >> op;
        if (op == 2)
        {
            break;
        }
        if (op == 3)
        {
            print_linked_list(head);
        }
        if (op == 1)
        {
            bool flag = true;
            int pos, val;
            cout << "Please insert position: ";
            cin >> pos;

            cout << "Please insert value: ";
            cin >> val;
            if (pos > size(head))
            {
                cout << "Invalid position" << endl;
                flag = false;
            }
            if (pos == 1 && flag)
            {
                insert_at_head(head, val);
            }
            else if (pos == size(head) + 1 && flag)
            {
                insert_at_tail(head, tail, val);
            }
            else if (pos == -1 && flag)
            {
                insert_at_tail(head, tail, val);
            }
            else if (pos == 0 && flag)
            {
                insert_at_tail(head, tail, val);
            }
            else if (pos <= size(head) && flag)
            {
                insert_any_position(head, pos, val);
            }
        }
        if (op == 4)
        {
            int po;
            cout << "Please enter position: ";
            cin >> po;
            delete_linked_list(head, tail, po);
        }
        if (op == 5)
        {
            while (true)
            {
                int v;
                cin >> v;
                if (v == -1)
                    break;
                insert_at_tail(head, tail, v);
            }
        }
        if(op == 6)
        {
            print_recursion(head);
            cout << endl;
        }
        if(op == 7)
        {
            print_reverse_recursion(head);
            cout << endl;
        }
    }
    return 0;
}