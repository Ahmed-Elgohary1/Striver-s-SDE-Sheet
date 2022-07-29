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
    

    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
                    ListNode*nxt,*temp,*head,*ans=new ListNode();
        head=ans;
        ans->next=nullptr;
       int flag=0;
    while(list1!=nullptr&&list2!=nullptr)
        {
        
        if((list1->val)>=(list2->val))
        {
           ans->next=list2;
        ans=ans->next;
        list2=list2->next;
        } 
        else
        {
            ans->next=list1;
             ans=ans->next;
        list1=list1->next;
        }
    }
   if(list1!=nullptr)
       ans->next=list1;
    else
        ans->next=list2;
      return head->next;
    }     
};
