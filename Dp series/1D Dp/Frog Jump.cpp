#include <bits/stdc++.h> 

int dp(int n,int i,vector<int> &h,vector<int> &memo)
{
    if(i==0)
        return 0;
    if(memo[i]!=-1)
        return memo[i];
   
    int j1,j2=INT_MAX;
    int temp1,temp2;
    temp1=abs(h[i-1]-h[i]);
         j1=dp(n,i-1 ,h,memo)+temp1;
    if(i>1)
    {
        temp2=abs(h[i-2]-h[i]);
         j2=dp(n,i-2,h,memo)+ temp2;
    }
   return memo[i]= min(j1,j2);
}

int frogJump(int n, vector<int> &h)
{
    vector<int>memo(n+5,-1);
    return dp(n,n-1,h,memo);
}
