
int dfs(int target,int level,vector<int>&price,vector<vector<int>>&memo)
{
    if(level>=price.size())
        return 0;
    if(target<=0)
        return 0;
    if(memo[level][target]!=-1)
        return memo[level][target];
    
    int take=0,notake=0;
    
         notake=max(notake,dfs(target,level+1,price,memo) );

        if(target>level)
            take=max(take,price[level]+dfs(target-level-1 ,level,price,memo));

    
    return memo[level][target]=max(take,notake);
    
}
int cutRod(vector<int> &price, int n)
{
    vector<vector<int>>memo(n+5,vector<int>(n+5,-1));
    
       return dfs(n,0,price,memo);
}
