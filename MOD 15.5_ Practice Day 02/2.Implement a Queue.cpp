#include <bits/stdc++.h> 
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
class Queue {
    Node *head = NULL;
    Node *tail = head;
    int sz = 0;
public:
    Queue() {}

    bool isEmpty() {
       return sz==0;
    }

    void enqueue(int data) {
        Node *newnode = new Node(data);
        sz++;
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    int dequeue() {
        if(head == NULL)return -1;
        Node *deletenode = head;
        int x = head->val;
        head = head->next;
        if(head == NULL) tail = NULL;
        sz--;
        delete deletenode;
        return x;
    }

    int front() {
        if(head == NULL)return -1;
        else return head->val;
    }
};