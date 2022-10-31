class Solution {
public:

    int table (string &s1,string &s2)
    {
         int n=s1.size();
         int m=s2.size();
         vector<int>cur(m+1,0),prev(m+1,0);

        for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(s1[i-1]==s2[j-1])
                     cur[j]=1+prev[j-1];
                     else
                    cur[j]=max(cur[j-1],prev[j]);
                }
                prev=cur;
            }
        
        return  prev[m];
    }

  
    
    int rec (string &s1,string &s2,int ind1,int ind2,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0)
           return 0;

        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2])
             return dp[ind1][ind2]= 1+rec(s1,s2,ind1-1,ind2-1,dp);
        else
            return  dp[ind1][ind2]= 0+ max(rec(s1,s2,ind1,ind2-1,dp),rec(s1,s2,ind1-1,ind2,dp));
    }


    int longestCommonSubsequence(string s1, string s2) 
    {
      
        nt n=s1.size();
         int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return rec(s1,s2,n-1,m-1,dp);
        

        return table(s1,s2);
    }
};
