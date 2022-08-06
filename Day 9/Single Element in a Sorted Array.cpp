class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
    int l=0,r=nums.size()-1;
       if(r==0)
           return nums[l];
    
        while(l<=r)
     {
         int mid=(l+r)/2,comp=0;
         if(nums[mid]==nums[mid+1])
             mid++;
         
         if((mid+1)%2)
          r=mid-1;
         else
             l=mid+1;
     }
       return nums[l]; 
    }
};
