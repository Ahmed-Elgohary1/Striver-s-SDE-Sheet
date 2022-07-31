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
 ListNode* middle(ListNode* head)
 {
     ListNode* slow=head,*fast=head;
     while(fast->next!=NULL &&fast->next->next!=NULL)
     {
        slow=slow->next;
         fast=fast->next->next;
     }
     return slow;
 }
    
    ListNode* reverseList(ListNode* head)
    {
    ListNode*d=NULL,*nxt;
    while(head!=NULL)
    {
       nxt = head->next;
        head ->next=d;
        d=head;
        head=nxt;
    }
        
   return d;
    }
    
    bool isPalindrome(ListNode* head)
    {
      ListNode* start=head,* mid=middle(head);
        mid->next=reverseList(mid->next);
        mid=mid->next;
        
        while(mid!=NULL)
        {
            if(start->val!=mid->val)
                return false;
            
            start=start->next;
            mid=mid->next;
        }
        return true;
    }
};
