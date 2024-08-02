class Solution {
public:
    stack<char> ss,tt;
    bool backspaceCompare(string s, string t) {
        for(char e:s)
        {
            if(e == '#' && !ss.empty())
            {
                ss.pop();
            }
            else if(e != '#')
            {
                ss.push(e);
            }
        }
        for(char e:t)
        {
            if(e == '#' && !tt.empty())
            {
                tt.pop();
            }
            else if(e != '#')
            {
                tt.push(e);
            }
        }
        return ss == tt;
    }
};