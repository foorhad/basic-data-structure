//problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = size(head)-n;
        if(sz==0)
        {
            head = head->next;
            return head;
        }
        ListNode *tmp = head;
        for(int i = 1; i < sz; i++)
        {
            tmp=tmp->next;
        }
        ListNode *deletenode = tmp->next;
        tmp->next=tmp->next->next;
        delete deletenode;
        
        return head;
    }
};

