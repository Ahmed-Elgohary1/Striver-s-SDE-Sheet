class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
    
        unordered_map<int,int>prefix;
        int ans=0,sum=0;
        
        for(int num:nums)
        {
          
           sum=(sum+num)%k;
            
            ans+= sum==0? 1:0;
            ans+= prefix.find(sum+k)!=prefix.end()? prefix[sum+k]:0;
             ans+= prefix.find(sum-k)!=prefix.end()? prefix[sum-k]:0;
            ans+= prefix.find(sum)!=prefix.end()? prefix[sum]:0;
            prefix[sum]++;
            
        }
        return ans;
    }
};
