class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i = 0; i < tickets.size(); i++)
        {
            q.push(tickets[i]);
        }
        int time = 0;
        while(1)
        {
            q.front()--;
            time++;
            if(k==0 && q.front()==0)break;
            if(k == 0)k = q.size()-1;
            else k--;

            if(q.front() != 0)q.push(q.front());
            q.pop();
        }
        return time;
    }
};