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
    
    vector<vector<int>>ans;
    
    void dfs (TreeNode* root)
    {
       queue<TreeNode*>q;
       q.push(root);
       
      while(!q.empty())
      {
          int n=q.size();
          vector<int>temp;
          // level begins here with n nodes
          for(int i=0;i<n;i++)
          {
             TreeNode* t=q.front();
             q.pop();
              
             temp.push_back(t->val);
              
             if(t->left!=NULL)
                 q.push(t->left);
              
             if(t->right!=NULL)
                 q.push(t->right);  
          }
           
          // level end
          
          ans.push_back(temp);
          
      }
        
        
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
      ans.clear();
      
        if(!root)
            return ans;
        
      dfs(root);
        
        
      return ans;  
    }
};
