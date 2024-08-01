//problem link : https://leetcode.com/problems/intersection-of-two-linked-lists/description/


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        for(ListNode *i = headA; i != NULL; i = i->next)
        {
           for(ListNode *j = headB; j != NULL; j = j->next)
            {
                if(i == j)
                {
                    return i;
                }
            } 
        }
        return NULL;
    }
};