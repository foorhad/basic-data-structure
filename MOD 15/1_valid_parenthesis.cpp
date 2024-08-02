class Solution {
public:
    stack<char> ss;
    bool isValid(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' )
            {
                ss.push(s[i]);
            }
            else{
                if(ss.empty()) return false;
                else
                {
                    if(s[i] == ')' && ss.top()=='(')
                    {
                        ss.pop();
                    }
                    else if(s[i] == '}' && ss.top()=='{')
                    {
                        ss.pop();
                    }
                    else if(s[i] == ']' && ss.top()=='[')
                    {
                        ss.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return ss.empty();
    }
};