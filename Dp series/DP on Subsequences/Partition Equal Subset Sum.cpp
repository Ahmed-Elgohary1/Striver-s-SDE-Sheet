class Solution {
public:
  
   bool rec (int ind,int target,vector<vector<int>>&dp,vector<int>& nums)
   {
       if(target==0)
         return true;
       
        if(target<0)
           return false;

       if(ind<0)
         return false;

      if(dp[ind][target]!=-1)
         return dp[ind][target];

            
    return dp[ind][target] = ( rec(ind-1,target,dp,nums) || 
                               rec(ind-1,target-nums[ind],dp,nums) );
   }

    bool canPartition(vector<int>& nums) 
    {
        int TotSum=0;

        for(int n:nums)
          TotSum+=n;

        if(TotSum%2)
           return false;

        vector<vector<int>>dp(250,vector<int>(TotSum/2 +9,-1));

        return rec (nums.size()-1,TotSum/2,dp,nums);   
    }
};
