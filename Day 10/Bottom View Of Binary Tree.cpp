/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#include<bits/stdc++.h>

    map<int,int>m; //key=line,value=data


void dfs (BinaryTreeNode<int> * root)
{
    queue<pair<BinaryTreeNode<int>* , int>> q; //{data,line}
    q.push({root,0});
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        int val=(temp.first)->data,line=temp.second;
        m[line]=val;
          if((temp.first)->left != NULL) {
                q.push({(temp.first)->left, line-1}); 
            }
            if((temp.first)->right != NULL) {
                q.push({(temp.first)->right, line + 1}); 
            }
    }
}

vector<int> bottomView(BinaryTreeNode<int> * root)
{
   vector<int>ans;
   m.clear();
        dfs(root);
    
    for(auto num:m)
        ans.push_back(num.second);
    
   return ans; 
}




