#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void input_the_value(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void display_list(Node *head)
{
    cout << endl
         << "Your linked list is: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insertion_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    cout << "updated head" << endl
         << endl;
}
void insertion_at_Specific_Position(Node *head, int val, int pos)
{
    Node *newnode = new Node(val);
    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
    }
    newnode->next = head->next;
    head->next = newnode;
    cout << endl
         << "Inserted vale " << pos << " position" << endl
         << endl;
}
void deletion_at_Head(Node *&head)
{
    Node *deletehead = head;
    head = head->next;
    delete deletehead;
    cout << endl
         << "Deleted head" << endl
         << endl;
}
void deletion_at_tail(Node *head)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = NULL;
    delete deleteNode;
    cout << endl
         << "Deleted tail node" << endl;
}
void deletion_at_a_specific_position(Node *head, int pos)
{
    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
    }
    Node *deletenode = head->next;
    head->next = head->next->next;
    delete deletenode;
    cout << endl
         << "deleted " << pos << "node" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1= Create a Singly Linked List (Take input from user)" << endl;
        cout << "Option 2= Terminate" << endl;
        cout << "Option 3= Display list" << endl;
        cout << "Option 4= Insertion at Head" << endl;
        cout << "Option 5= Insertion at Specific Position" << endl;
        cout << "Option 6= Deletion at Head" << endl;
        cout << "Option 7= Deletion at Tail" << endl;
        cout << "Option 8= Deletion at a Specific Position" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int count = 0;
            cout << "enter the value: ";
            int val;
            while (1)
            {
                cin >> val;
                if (val == -1)
                {
                    break;
                }
                count += 1;
                input_the_value(head, val);
            }
            cout << endl
                 << "size of linked list: " << count << endl;
        }
        else if (op == 2)
        {
            break;
        }
        else if (op == 3)
        {
            display_list(head);
        }
        else if (op == 4)
        {
            int val;
            cout << "input the value: ";
            cin >> val;
            insertion_at_head(head, val);
        }
        else if (op == 5)
        {
            int val, pos;
            cout << "input postion : ";
            cin >> pos;
            cout << "input value: ";
            cin >> val;
            insertion_at_Specific_Position(head, val, pos);
        }
        else if (op == 6)
        {
            deletion_at_Head(head);
        }
        else if (op == 7)
        {
            deletion_at_tail(head);
        }
        else if (op == 8)
        {
            int pos;
            cout << "input position: ";
            cin >> pos;
            deletion_at_a_specific_position(head, pos);
        }
    }

    return 0;
}
