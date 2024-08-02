class MinStack {
public:
    stack<int> s;
    stack<int> mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            mn.push(val);
            return;
        }
        mn.push( min(val,mn.top()) );
        // if(val < mn.top())
        // {
        //     mn.push(val);
        // }
        s.push(val);
    }
    
    void pop() {
        if(s.empty()) return;
        else{
        s.pop();
        mn.pop();}
    }
    
    int top() {
       return s.top();
    }
    
    int getMin() {
        return mn.top();
        
    }
};
