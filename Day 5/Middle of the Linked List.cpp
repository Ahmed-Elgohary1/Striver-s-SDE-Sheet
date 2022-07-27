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
    ListNode* middleNode(ListNode* head)
    {
    int count =0;
         ListNode* middleNode=head;
        while(middleNode!= NULL)
        {
            count++;
            middleNode=middleNode->next;
        }
       int i= count/=2;
        while(i--)
        {
            
            head=head->next;
        }
        return head;
    }
};
