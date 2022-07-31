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
       ListNode* ans= new ListNode();
        ListNode* start=ans;
        int carry=0;
    while(l1!=NULL||l2!=NULL)
    {
        int t1=0,t2=0;
        if(l1!=NULL)
        {
            t1=l1->val;
            l1=l1->next;
        }
         if(l2!=NULL)
        {
            t2=l2->val;
            l2=l2->next;
        }
        ans->next=new ListNode(); ans=ans->next;
        ans->val=(t1+t2+carry)%10;
                carry=(t1+t2+carry)/10;

    }
        if(carry!=0)
        {
         ans->next=new ListNode(); ans=ans->next;
        ans->val=1;   
        }
         
   return start->next;     
    }
};
