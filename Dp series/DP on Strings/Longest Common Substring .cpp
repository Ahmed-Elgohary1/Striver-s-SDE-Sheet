#include <bits/stdc++.h> 
int lcs(string &str1, string &str2)
{
    int m=str1.size(),n=str2.size(),ans=0;
    vector<vector<int>>dp(m+5,vector<int>(n+5,0));
    
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            if(str1[i-1]==str2[j-1])
              ans=max(ans, dp[i][j]=1+dp[i-1][j-1]);
        }
    return ans;
}
