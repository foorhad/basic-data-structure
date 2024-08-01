//problem link : https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

class Solution {
public:
int size(ListNode* head) //O(n)
{
    ListNode *tmp = head;
    int cnt = 0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
    int getDecimalValue(ListNode* head) 
    {
        int sz = size(head)-1;
        int num = pow(2,sz);
        ListNode *tmp = head;
        int sum = 0;
        while(tmp != NULL)
        {
            if(tmp->val == 1)
            {
                sum += num;
            }
            num = num / 2;
            tmp = tmp->next;    
        }
        return sum;
        
    }
};