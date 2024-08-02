#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> newstack;
    while (!myStack.empty()) {
        newstack.push(myStack.top());
        myStack.pop();
    }
    newstack.push(x);

    while (!newstack.empty()) {
        myStack.push(newstack.top());
        newstack.pop();
    }

    return myStack;
}