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
      int count=0;
         ListNode *temp=head, *begin=head;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        
        if(count==n)
            return temp->next;
        
        count-=n;count--;
        
        while(count--)
            {
                temp=temp->next;
            }
        
        temp->next=(temp->next)->next;
        
    return begin;
     
    }
};
