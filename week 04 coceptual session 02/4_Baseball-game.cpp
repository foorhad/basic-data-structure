class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for(string c : operations)
        {
            if(c == "+")
            {
                int prev1 = s.top(); s.pop();
                int prev2 = s.top();
                int sum = prev1+prev2;
                s.push(prev1); s.push(sum);
            }
            else if(c == "C")s.pop();
            else if(c=="D")s.push(s.top()*2);
            else s.push(stoi(c));
        }
        int sum1 = 0;
        while(!s.empty())
        {
            sum1+=s.top(); s.pop();
        }
        return sum1;
    }
};