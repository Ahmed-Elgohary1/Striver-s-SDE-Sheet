class Solution {
public:
    int longestNiceSubarray(vector<int>& nums)
    {
        int p=0,j=0,ans=1;
        for(int i=0;i<nums.size();i++)
        {
            while((p&nums[i])!=0)
            {
                p^=nums[j++];
            }
            p|=nums[i];
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
