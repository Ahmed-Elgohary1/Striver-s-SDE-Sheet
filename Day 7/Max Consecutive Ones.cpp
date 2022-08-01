class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int count=0,ans=0;
        for(int num:nums)
        {
            if(num==1)
                count++;
            else
                count=0;
            ans=max(ans,count);
            
        }
        return ans;
    }
};
