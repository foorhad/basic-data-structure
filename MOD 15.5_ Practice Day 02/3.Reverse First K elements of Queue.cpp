#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;
    for(int i = 1; i<=k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    
    queue<int> q1;
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!q1.empty())
    {
        q.push(q1.front());
        q1.pop();
    }

    return q;
}
