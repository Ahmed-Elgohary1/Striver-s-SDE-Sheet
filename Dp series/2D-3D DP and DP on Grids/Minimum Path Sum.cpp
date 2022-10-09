class Solution {
public:

    int sum(int m,int n,int i,int j, vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(i>=m || j>=n)
          return 100000;
        if(dp[i][j]!=-1)  
          return dp[i][j];
        if(i==m-1 && j==n-1)
          return grid[i][j];  
       

        return dp[i][j]=grid[i][j] +min(sum(m,n,i+1,j,grid,dp),sum(m,n,i,j+1,grid,dp));
    }

    int minPathSum(vector<vector<int>>& grid) 
    {
        vector<vector<int>>dp(250,vector<int>(250,-1));
        int m=grid.size(),n=grid[0].size();
            return sum(m,n,0,0,grid,dp);
    }
};
