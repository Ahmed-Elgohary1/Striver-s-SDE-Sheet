#include <bits/stdc++.h> 

 
int minSubsetSumDifference(vector<int>& A, int n)
{
    int sum=0;
    for(int i=0;i<n;++i)
        sum+=A[i];
    
    //Subset Sum Problem
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;++i)
    for(int j=0;j<=sum;++j)
    {
        if(j==0)
            dp[i][j] = true;
        else if(i==0)
            dp[i][j] = false;
        else if(A[i-1]>j)
            dp[i][j] = dp[i-1][j];
        else
            dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
    }
    
    int diff = INT_MAX;
    for(int i=0;i<=sum/2;++i)
    {
        int first = i;
        int second = sum-i;
        if(dp[n][i]==true and diff>abs(first-second))
            diff = abs(first-second);
    }
    
    return diff;    

}
