void reverseStack(stack<int> &s) {
    if(s.empty()) return;
    int v = s.top();
    s.pop();
    reverseStack(s);

    stack<int> s1;
    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    s1.push(v);

    while (!s1.empty()) {
    s.push(s1.top());
    s1.pop();
    }
}