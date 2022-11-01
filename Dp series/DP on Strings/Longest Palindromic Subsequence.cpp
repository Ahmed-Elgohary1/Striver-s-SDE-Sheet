class Solution {
public:
    int longestPalindromeSubseq(string s1) 
    {
        string s2=s1;
        reverse(s2.begin(),s2.end());
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
};
