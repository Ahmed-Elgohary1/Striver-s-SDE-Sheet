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
   
    map<int,vector<int>>m;
    void dfs(TreeNode* root)
    {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        while(!q.empty())
        {
            
            multiset<pair<int,int>> ms;
            int n = q.size();
            
            for(int i=0;i<n;i++)
            {
                auto temp=q.front();
                q.pop();

                TreeNode* node=temp.first;
                int line=temp.second;

                ms.insert({node->val,line});

             if(node->right != NULL) 
                    q.push({node->right, line + 1}); 

             if(node->left != NULL)
                    q.push({node->left, line-1}); 

            }
            //level Ended
            
            for(auto temp:ms)
            {
                m[temp.second].push_back(temp.first);
            }
            
        }
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
      m.clear();
      vector<vector<int>>ans;
        
       if(root) 
       dfs(root);
      
      for(auto num:m)
      {
          vector<int>temp=num.second;
        ans.push_back(temp);  
      }
        return ans;
    }
};
