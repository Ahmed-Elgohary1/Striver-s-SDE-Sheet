class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
      int n=nums.size();     
      int mn=0,mx=-1e6,ans=-1e5,temp1=0; 
        
        
    for(int i=0;i<n;i++)
        {
            temp1+=nums[i];
            ans=max(ans,temp1);
            if(temp1<0)
                temp1=0;
        }
        return ans;
    }
};
