class BrowserHistory {
public:
    class Node
    {
        public:
            string val;
            Node *prev;
            Node *next;

            Node(string val)
            {
                this->val=val;
                this->prev=NULL;
                this->next=NULL;
            }  
    };
    Node *current = new Node(" ");

    BrowserHistory(string homepage) {
        current->val = homepage;     
    }
    
    void visit(string url) {
        Node *newnode = new Node(url);
        current->next = newnode;
        newnode->prev = current;
        current = newnode;
    }
    
    string back(int steps) {
        for(int i = 0; i < steps; i++)
        {
            if(current->prev != NULL)
            {
                current = current->prev;
            }
        }
        return current->val;
    }
    
    string forward(int steps) {
        for(int i = 0; i < steps; i++)
        {
            if(current->next != NULL)
            {
                current = current->next;
            }
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */