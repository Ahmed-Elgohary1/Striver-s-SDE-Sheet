/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>>ans;
        queue<TreeNode*>level;
        level.push(root);
        
        if(!root)
            return ans;
        
        while(!level.empty())
        {
           TreeNode* temp;
            int n=level.size();
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                
                temp=level.front();
                level.pop();
                v.push_back(temp->val);
                if(temp->left)
                    level.push(temp->left);
                if(temp->right)
                    level.push(temp->right);
                
            }
            ans.push_back(v);
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};
