//problem link : https://leetcode.com/problems/swap-nodes-in-pairs/description/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)return head;
        ListNode* tmp = head;
        ListNode* tmp1 = head->next;
        while(tmp != NULL && tmp1 != NULL)
        {
            swap(tmp->val, tmp1->val); 
            if(tmp->next->next == NULL)
            {
                break;
            }
            tmp = tmp->next->next;  
            tmp1 = tmp1->next->next;  
        }
        return head;
    }
};