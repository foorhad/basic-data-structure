class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stack;
        for(string e : logs)
        {
            if(e == "../")
            {
                if(!stack.empty())
                stack.pop();
            }
            else if(e != "./")
            {
                stack.push(e);
            }
        }

        return stack.size();
    }
};