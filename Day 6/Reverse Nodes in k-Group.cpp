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
   ListNode* reverseList(ListNode*d,ListNode*head)
   {
        ListNode* next,*terminal=d;
       while(head!=terminal)
       {
        next = head->next;
        head ->next=d;
        d=head;
        head=next;
       }
       return d;
   }

    ListNode* reverseKGroup(ListNode* head, int k)
    {
        int n=0,flag=0;
        ListNode* start=head,*ans=new ListNode();
     while(head!=NULL)
     {
         n++;
         if(n==k)
         {
             flag++;
            ListNode* temp =head->next;
            start= reverseList(temp,start);
             if(flag==1)
                 ans->next=start;
            
             head=start;
          n=0; 
         }   
             
         head=head->next;
     }
        return ans->next;
    }
};









