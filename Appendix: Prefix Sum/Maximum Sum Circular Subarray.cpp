class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffix(n,0);
        suffix[n-1]=nums[n-1];
        int temp=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
         temp+=nums[i];   
         suffix[i]=max(suffix[i+1],temp);        
        }
        int ans=-1e9,resdual=0,prefix=0,start=0,cycal=-1e9;

        for(int i=0;i<nums.size();i++)
        {

            resdual+=nums[i];
            prefix+=nums[i];
            ans=max(ans,resdual);
            if(resdual<=0)
                resdual=0;
               
           if(i+1<n)
           {
            cycal=max(cycal,prefix+suffix[i+1]);
           }

          
        }
      return max(ans,cycal);
    }
};
