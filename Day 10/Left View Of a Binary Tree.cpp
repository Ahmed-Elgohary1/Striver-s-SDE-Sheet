/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int>ans;

void dfs (TreeNode<int> *root,int level)
{
    if(!(root))
        return;
    if(ans.size()==level) ans.push_back(root->data);
            dfs(root->left, level+1);   
            dfs(root->right, level+1);

}

vector<int> getLeftView(TreeNode<int> *root)
{
    ans.clear();
    dfs(root,0);
    return ans;
}



