/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>

map<int,int>m; //key=line,value=data


void dfs (TreeNode<int> * root)
{
    queue<pair<TreeNode<int>* , int>> q; //{data,line}
    q.push({root,0});
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        int data=(temp.first)->val,line=temp.second;
        
        
       if(m.find(line)==m.end())
         m[line]=data;
        
          if((temp.first)->left != NULL)
                q.push({(temp.first)->left, line-1}); 
            
         if((temp.first)->right != NULL) 
                q.push({(temp.first)->right, line + 1}); 
            
    }
}

vector<int> getTopView(TreeNode<int> *root) 
{
    m.clear();
    vector<int>ans;
    
    if(root)
    dfs(root);

    for(auto num:m)
        ans.push_back(num.second);
    
   return ans;
}
