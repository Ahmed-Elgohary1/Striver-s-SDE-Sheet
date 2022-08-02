/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head)
    {
    Node* h=head,*ans=new Node(NULL),*begin;
        begin=ans;
     unordered_map< Node*,Node*>m;   
    while(h!=nullptr)
    {
     if(m.find(h)==m.end())
     {
       m[h]=new Node(h->val);
     }
        h=h->next;
    }
    while (head!=nullptr)
    {
       ans->next=m[head];
        ans=ans->next;
        ans->random=m[head->random];
        head=head->next;
    }
    return begin->next;    
    }
};
