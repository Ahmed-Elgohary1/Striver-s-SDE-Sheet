class Solution {
public:
   
  int rec(int ind,vector<int>& cost,vector<int>& dp)
  {
      if(ind>=cost.size())
        return 0;
      if(dp[ind]!=-1)
       return dp[ind];
    int j1,j2=1e6;
    j1=cost[ind]+rec(ind+1,cost,dp);
    if(ind+2<=cost.size())
    j2=cost[ind]+rec(ind+2,cost,dp);

    return dp[ind]=min(j1,j2);
         
  }

    int minCostClimbingStairs(vector<int>& cost) 
    {
        vector<int>dp(1100,-1);

        return min(rec(0,cost,dp),rec(1,cost,dp));
    }
};
