class Solution {
public:

    int count(int n,int m,int i,int j,vector<vector<int>>& obstacleGrid,
                                    vector<vector<int>>& dp)
        {
              if(i>=m||j>=n || obstacleGrid[i][j]==1)
                return 0;
              if(dp[i][j]!=-1)
                return dp[i][j];
              if(i==m-1 && j==n-1)
                return 1;  

              return dp[i][j]= count(n,m,i+1,j,obstacleGrid,dp) +
                                count(n,m,i,j+1,obstacleGrid,dp);         
        }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        vector<vector<int>>dp(200,vector<int>(200,-1));
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        return count(n,m,0,0,obstacleGrid,dp); 
    }
};
