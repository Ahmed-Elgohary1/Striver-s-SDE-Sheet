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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode *,int>m;
while(headA!=NULL||headB!=NULL)
    {
        if(m.find(headA)==m.end())
        {
        if(headA!=NULL)
            m[headA]=headA->val;
        }
        else
            return headA;
                
    if(headA!=NULL)
        headA=headA->next;
        
        if(m.find(headB)==m.end())
        {
         if(headB!=NULL)
            m[headB]=headB->val;
        }
        else
            return headB;
        
    if(headB!=NULL)
        headB=headB->next;
    }
     return NULL;     
    }
};
