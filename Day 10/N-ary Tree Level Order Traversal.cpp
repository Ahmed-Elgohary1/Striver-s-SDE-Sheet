/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        
        if(!root)
            return ans;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                for(int j=0;j<temp->children.size();j++)
                {
                    if(temp->children[j])
                    q.push(temp->children[j]);
                }
            }
            ans.push_back(v);
        }
            return ans;
    }
};
