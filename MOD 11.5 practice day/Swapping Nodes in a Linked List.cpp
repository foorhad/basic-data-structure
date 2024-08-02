//problem link : https://leetcode.com/problems/merge-nodes-in-between-zeros/
class Solution {
public:
int size(ListNode *head)
{
    int cnt = 0;
    ListNode *tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *tmp1 = head;
        for(int i=1; i<k; i++)
        {
            tmp1 = tmp1->next;  //we are at 2
        }

        int sz = size(head)-k;
        ListNode *tmp2 = head;
        for(int i=1; i<=sz; i++)
        {
            tmp2 = tmp2->next;  //we are at 4
        }
        
        swap(tmp1->val,tmp2->val);
    

        return head;
    }
    

};