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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
     int carry=0;
     ListNode* head=l1,*last1,*last2;   
 
        while(l1!=nullptr&&l2!=nullptr)
        {
            last1=l1;
          int temp=(l1->val)+(l2->val)+carry;
            if(temp>=10)
            {
                carry=temp/10;
                temp%=10;
            }
             else
            carry=0;
            
            l1->val=temp;
            
           l1= l1->next;
           l2= l2->next;   
        }
        
        if(l1==NULL&&l2==NULL)
        {
            if(carry!=0) 
       {
           (last1->next)=new ListNode();
           (last1->next)->val=carry;
       } 
        }
     
   if(l2==nullptr)
    {     
           
        while(l1!=NULL)
        {
            last1=l1;
            int temp=(l1->val)+carry;
            if(temp>=10)
            {
                carry=temp/10;
                temp%=10;
            }
             else
            carry=0;
            l1->val=temp;
            
           l1= l1->next;
        }
   if(carry!=0) 
       {
           (last1->next)=new ListNode();
           (last1->next)->val=carry;
       } 
    }  
       
    if(l1==nullptr)
    {
      l1=l2;  
    while(l2!=NULL)
        {
        last2=l2;
            int temp=(l2->val)+carry;
            if(temp>=10)
            {
                carry=temp/10;
                temp%=10;
            }
        else
            carry=0;
            l2->val=temp;
            
           l2= l2->next;
        }
      if(carry!=0&&last2) 
       {
           (last2->next)= new ListNode();
           (last2->next)->val=carry;
       } 
    }  
         
   return head;     
    }
};
