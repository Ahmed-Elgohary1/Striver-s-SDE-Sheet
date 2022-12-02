#include <bits/stdc++.h> 

int dfs(int target,int ind,vector<int>&arr,vector<vector<int>>&memo)
{
    if(target==0)
        return 1;
    if(target<0)
        return 0;
    if(ind==arr.size())
        return 0;
    if(memo[ind][target]!=-1)
        return memo[ind][target];
   
    int notake=dfs(target,ind+1,arr,memo) ,
          take=dfs(target-arr[ind],ind+1,arr,memo);
    
    return memo[ind][target]=take+notake;
    
}

int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    vector<vector<int>>memo(n+5,vector<int>(tar+9,-1));
    
    
    vector<int> prev(tar+1,0);
    
    prev[0] =1;
    
    if(num[0]<=tar)
        prev[num[0]] = 1;
    
    for(int ind = 1; ind<n; ind++){
        vector<int> cur(tar+1,0);
        cur[0]=1;
        for(int target= 1; target<=tar; target++){
            
            int notTaken = prev[target];
    
            int taken = 0;
                if(num[ind]<=target)
                    taken = prev[target-num[ind]];
        
            cur[target]= notTaken + taken;
        }
        
        prev = cur;
    }
    
    return prev[tar];
    
  //  return dfs(tar,0,num,memo);
}
