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
    
    queue<TreeNode*>q;
    
   void revers(int n)
    {
        vector<int>temp(n); 
        
         for(int i=n-1;i>=0;i--)
          {
             TreeNode* t=q.front();
             q.pop();
              
             temp[i]=(t->val);
              
             if(t->left!=NULL)
                 q.push(t->left);
              
             if(t->right!=NULL)
                 q.push(t->right);  
          }
        ans.push_back(temp);
    }
    
    void reg(int n)
    {
        vector<int>temp(n); 
        
         for(int i=0;i<n;i++)
          {
             TreeNode* t=q.front();
             q.pop();
              
             temp[i]=(t->val);
              
             if(t->left!=NULL)
                 q.push(t->left);
              
             if(t->right!=NULL)
                 q.push(t->right);  
          }
        ans.push_back(temp);
    }
    
    void dfs(TreeNode* root)
    {
        int level=0;
        q.push(root);
        while(!q.empty())
        {
          int  n=q.size();
         if(level%2)
          revers(n);
        else
             reg(n);
            
          
            
           level++; 
        }
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        ans.clear();
        if(root)
        dfs(root);
        
        return ans;
    }
};
