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
   
    
    bool check(unordered_map<int,int>&frq)
    {
        int odd=0;
        for(auto it:frq)
        {
            if(it.second%2)
                odd++;
        }
        return odd<2;
    }
    
    int bfs(TreeNode* root,unordered_map<int,int>&frq)
    {
        int ans=0;
        if(root!=NULL && !root->left&&!root->right)
        {
            frq[root->val]++;
            int odd=check(frq)? 1:0;
            frq[root->val]--;
            return odd;
        }
        frq[root->val]++;
        
     if(root->left)
     {
      ans+=bfs(root->left,frq) ;
         
     }
     if(root->right)   
      ans+=bfs(root->right,frq);   
        
      frq[root->val]--;  
        
        return ans;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        unordered_map<int,int>frq;
        
        
        return bfs(root,frq);
    }
};
