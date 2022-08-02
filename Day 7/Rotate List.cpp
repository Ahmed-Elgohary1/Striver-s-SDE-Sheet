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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode *begin=head,*pre,*hed=head;
      
        if(head==NULL||head->next==NULL)
            return head;
          int count=0; 
       while(hed!=nullptr)  
        {
           hed=hed->next; 
           count++;
        } 
     
      k=k%count;  
       
    while(k--)
        {
         while(head->next->next!=nullptr)  
        {
           head=head->next; 
        }
        pre=head;
        
        ListNode * temp=pre->next;
          pre->next->next=begin;
        begin =temp;
        pre->next=NULL;
        head=begin;
        }
      return begin;  
    }
};
