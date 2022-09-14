class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
    
        unordered_map<int,int>prefix;
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
         ans +=  prefix.find(sum-k)!=prefix.end() ? prefix[sum-k]:0;
         ans += sum==k? 1:0;   
            prefix[sum]++;
            
        }
        return ans;
    }
};
