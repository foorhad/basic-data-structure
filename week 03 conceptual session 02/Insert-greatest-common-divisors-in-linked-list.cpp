/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//problem link : https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        ListNode* tmp = head;
        while(tmp->next != NULL)
        {
            int g = __gcd(tmp->val, tmp->next->val);
            ListNode *newnode = new ListNode(g);
            newnode->next = tmp->next;
            tmp->next = newnode;

            tmp = tmp->next->next;
        }
        return head;   
    }
};