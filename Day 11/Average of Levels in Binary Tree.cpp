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
    vector<double> averageOfLevels(TreeNode* root) 
    {
    
        queue<TreeNode*>level;
        vector<double>ans;
        level.push(root);
        
        while(!level.empty())
        {
            int n=level.size();
            double count =0.0;
            TreeNode* temp;
            for(int i=0;i<n;i++)
            {
                temp=level.front();
                level.pop();
                count+=temp->val;
                if(temp->left)
                level.push(temp->left);
                if(temp->right)
                 level.push(temp->right);
            }
            ans.push_back(count/n);
            
        }
       return ans; 
    }
};
