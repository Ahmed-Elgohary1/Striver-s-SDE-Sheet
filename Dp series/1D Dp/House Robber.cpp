class Solution {
public:

    int solve(int ind,vector<int>& dp,vector<int>& nums)
    {
        if(ind>=nums.size())
          return 0;

        if(dp[ind]!=-1)
          return dp[ind];

        for(int i=ind;i<nums.size();i++ )
        {
            dp[ind]=max(dp[ind],nums[ind]+solve(i+2,dp,nums));
        }
        return dp[ind] ;   

    }

    int rob(vector<int>& nums) 
    {
        int mx=0;
        vector<int>dp(nums.size()+5,-1);
        for(int i=0;i<nums.size();i++)
        {
            mx=max(mx,solve(i,dp,nums));
        }

        return mx;
    }
};
