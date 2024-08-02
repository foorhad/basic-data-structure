class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> newS;
        int first;
        while(!empty())
        {
            int k = s.top();
            s.pop();
            if(empty())
            {
                first = k;
                break;
            }
            newS.push(k);
        }
        while(!newS.empty())
        {
            s.push(newS.top());
            newS.pop();
        }
        return first;
    }
    
    int peek() {
        stack<int> newS;
        int first;
        while(!empty())
        {
            int k = s.top();
            s.pop();
            if(empty())
            {
                first = k;
            }
            newS.push(k);
        }
        while(!newS.empty())
        {
            s.push(newS.top());
            newS.pop();
        }
        return first;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */