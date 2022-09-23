class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
    
        int cur=0,ans=0,sub=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                cur=sub;
                sub=0;
            }
            else
            {
                cur++;
                sub++;
            }
            ans=max(ans,cur);
            
        }
        ans=max(ans,sub);
        return ans==n? n-1:ans;
    }
};
