//problem link : https://leetcode.com/problems/merge-nodes-in-between-zeros/
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode *tmp = head;
        ListNode *newnode = new ListNode(0);
        ListNode *newtmp = newnode;
        int sum = 0;
        while(tmp->next != NULL)
        { 
            if(tmp->next->val != 0)
            {
                sum += tmp->next->val;
            }
            else
            {
                ListNode *new1 = new ListNode(sum);
                sum = 0;
                newtmp->next = new1;
                newtmp = newtmp->next;
            }
            tmp = tmp->next;
        } 
       return newnode->next;
    }
};