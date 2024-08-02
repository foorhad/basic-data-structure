#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	stack<int> s,mn;
	
	public:
		
		// Constructor
		minStack() 
		{}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			if(s.empty() && mn.empty())
			{
				s.push(num);
				mn.push(num);
				return;
			}
			if(num <= mn.top())
			{
				mn.push(num);
			}
			s.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(s.empty())return -1;
			int t = s.top();
			if(t==mn.top())
			{
				mn.pop();
			}
			s.pop();
			return t;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(s.empty())return -1;
			return s.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(mn.empty())return -1;
			return mn.top();

		}
};