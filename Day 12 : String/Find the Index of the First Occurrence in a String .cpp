class Solution {
public:
    
    vector<int>prep(string pattern)
    {
        int i=1,j=0,n=pattern.size();
        vector<int>lps(n);
        while(i<n)
        {
            if(pattern[j]==pattern[i])
            {
                lps[i]=j+1;
                i++;
                j++;
            }
            else
            {
                if(j==0)
                {
                    lps[i]=0;
                    i++;
                }
                else
                {
                    j=lps[j-1];
                }
            }
        }
        
        return lps;
    }
    
    int strStr(string haystack, string needle) 
    {
        int i=0,j=0,n=needle.size(),len=haystack.size();
        
        if(n==0)
            return -1;
        
       vector<int>lps(n);
        lps=prep(needle);
        
        while(i<len)
        {
            if(haystack[i]==needle[j])
                if(j==n-1)
                    return(i-n+1);
                else
                {i++;j++;}
            else
            {
                if(j==0)
                    i++;
                else
                {
                    j=lps[j-1];
                }
            }
        }
        
        return -1;
    }
};




