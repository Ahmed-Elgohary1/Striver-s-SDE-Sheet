/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
     ListNode * fast=head,*slow=head,*temp=head;   
        
        while(fast&&fast->next&&fast->next)
        {
       fast = fast->next->next;
        slow = slow->next;
            if(slow==fast)
            {
                while(temp!=slow)
                {
                slow=slow->next;
                temp=temp->next;
                }
                return slow;
            }             
        }
        
        return nullptr;
    }
};
