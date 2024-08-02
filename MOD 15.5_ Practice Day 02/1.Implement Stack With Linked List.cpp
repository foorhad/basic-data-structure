/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    int sz=0;
    Node *head=NULL;

public:
  
    Stack()
    {}

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return getSize()==0;
    }

    void push(int data)
    {
        sz++;
        Node *newnode = new Node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        Node *tmp = head;
        head=newnode;
        head->next=tmp;
        
    }

    void pop()
    {
        if(!isEmpty())
        {
            sz--;
            Node *deletenode = head;
            head = head->next;
            delete deletenode;
        }
    }

    int getTop()
    {
        if (isEmpty()) return  -1;
        return head->data;
        
       
    }
};