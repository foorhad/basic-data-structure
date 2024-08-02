class MyStack {
public:
    queue<int> q; 
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> newQ;
        int last_element;
        while(!empty())
        {
            int k = q.front();
            q.pop();
            if(empty())
            {
                last_element = k;
                break;
            }
            newQ.push(k);
        }
        q = newQ;
        return last_element;
    }
    
    int top() {
        queue<int> newQ;
        int last_element;
        while(!empty())
        {
            int k = q.front(); //check globally
            q.pop();
            if(empty())
            {
                last_element = k;
            }
            newQ.push(k);
        }
        q = newQ;
        return last_element;  
    }
    
    bool empty() {
        if(q.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */