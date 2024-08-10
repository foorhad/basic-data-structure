class Solution {
public:
    stack<char> stack;
    string removeDuplicates(string s) {
        for(char e : s)
        {
            if(!stack.empty() && e==stack.top())
            {
                stack.pop();
            }
            else
            {
                stack.push(e);
            }
        }
        string str;
        while(!stack.empty())
        {
            str+=stack.top();
            stack.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};