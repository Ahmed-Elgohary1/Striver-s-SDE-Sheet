class Solution {
public:

    int dfs(int i,int j,int prev,vector<vector<int>>& grid,vector<vector<int>>& dp)
        {
           

             if(j==grid[0].size())
               return dp[i][j]=-2;
             
              if(i==grid.size())
               return dp[i][j]=j;

             if(j==0 && grid[i][j]==-1 || j==grid[0].size()-1 && grid[i][j]==1)
               return dp[i][j]=-2;

            if(dp[i][j]!=-1)
              return dp[i][j];

            int cur_dir=grid[i][j];
            int neighbor_dir=grid[i][j+cur_dir];
            
            if((cur_dir+neighbor_dir)==0)
               return dp[i][j]=-2;

            
            return dp[i][j] =dfs( i+1, j+cur_dir,cur_dir, grid, dp) ; 
        }
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        int m=grid.size(),n=grid[0].size();
        vector<int>ans(n);
        vector<vector<int>> dp(105,vector<int>(105,-1));
        for(int i=0;i<n;i++)
        {
            int colum= dfs( 0,i ,0, grid, dp);
            ans[i]=colum==-2?-1:colum; 
        }
        return ans;
    }
};
