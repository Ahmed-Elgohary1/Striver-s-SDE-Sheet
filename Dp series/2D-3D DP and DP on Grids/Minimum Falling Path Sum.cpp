class Solution {
public:
    
    int f(int i,int j,int n,int m,vector<vector<int>>& a,vector<vector<int>>& dp)
    {
        if(j<0 || j>m-1)
            return 1e9;
        if(dp[i][j]!=-1)
          return dp[i][j];

        if(i==0)
            return a[i][j];
        
        int up = a[i][j] + f(i-1,j,n,m,a,dp);
        
        int ld = a[i][j] + f(i-1,j-1,n,m,a,dp);
        
        int rd = a[i][j] + f(i-1,j+1,n,m,a,dp);
        
        
        return dp[i][j]=min(up,min(ld,rd));
        
    }
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int ans=INT_MAX;
        
        int n=matrix.size();
        
        int m=matrix[0].size();
        
        vector<vector<int>>dp(200,vector<int>(200,-1));

        for(int j=0;j<m;j++)
        {
            ans=min(ans,f(n-1,j,n,m,matrix,dp));
        }
        
        return ans;
        
    }
};
