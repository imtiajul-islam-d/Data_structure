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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    // while (fast->next != NULL && slow != NULL) This condition will give error, because && operator does actually, it first check the left side, if it is true it will not check the second one then. Here if fast is NULL, it will try to check the next is it NULL or not, then it will get an error;
    while (slow != NULL && fast->next != NULL) // complexity is O(N)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "Cycle not detected" << endl;
    }
}