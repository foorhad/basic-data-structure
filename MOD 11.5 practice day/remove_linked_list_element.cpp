//problem link : https://leetcode.com/problems/remove-linked-list-elements/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode *tmp = head;
        ListNode *newhead = new ListNode(0);
        ListNode *newtmp = newhead;

        while(tmp!= NULL)
        {
            if(tmp->val != val)
            {
                newtmp->next = new ListNode(tmp->val);
                newtmp = newtmp->next;
            }
            tmp=tmp->next;
        }
        return newhead->next;
    }
};

//         ListNode *newnode = new ListNode(val);
//         if(head == NULL)return head;
//         ListNode *tmp = head;
//         while(tmp->next != NULL)
//         {
//             if(tmp->val == newnode->val)
//             {
//                 ListNode *newnode1 = tmp;
//                 tmp->val=tmp->next->val;
//                 tmp=tmp->next;
//                 delete newnode1;
//             }
//             else if(tmp->next->val == newnode->val)
//             {
//                 ListNode *deletenode = tmp->next;
//                 tmp->next=tmp->next->next;
//                 delete deletenode;
//             }
//             else
//             {
//                 tmp=tmp->next;
//             }
//         }
//         return head;
//     }
// };

