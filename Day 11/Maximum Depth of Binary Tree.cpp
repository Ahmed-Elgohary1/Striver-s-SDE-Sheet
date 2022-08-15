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
    int count=0;
    
    void bfs(TreeNode* root,int temp)
    {
        if(!root)
           return;
        
        temp++;
        
        bfs( root->left,temp);
        bfs( root->right,temp);
        count=max(count,temp);
        return;
    }
    
    
    int maxDepth(TreeNode* root) 
    {
     bfs(root,0);
        
        return count;
    }
};
