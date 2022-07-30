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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
      ListNode * start = new ListNode(),*fast=start,*slow=start;
        start -> next = head;
        int count=0;
        while(fast->next!=NULL)
        {
            fast=fast->next; 
            if(count==n)
            {
                slow=slow->next;
                count--;
            }
        
            count++;
  
        }
        slow->next=(slow->next)->next;
     
        
    return start->next;
     
    }
};
