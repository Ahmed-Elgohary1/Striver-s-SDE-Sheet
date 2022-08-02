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
        ListNode *begin=head,*fast=head,*hed=head;
      
        if(head==NULL||head->next==NULL)
            return head;
        
        
          int count=1,i; 
       
        while(hed->next!=nullptr)  
        {
           hed=hed->next; 
           count++;
        } 
hed->next=head;
   
   k=k%count;  
   i=count-k-1; 
        
     while(i--)
     {
      fast=fast->next;   
     }
        begin=fast->next;
      fast->next=NULL;  
      
   return begin;
    }

};
