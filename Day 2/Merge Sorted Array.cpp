class Solution {
public:
    
     void semisort(vector<int>& nums,int n)
     {
      for(int i=0;i<n-1;i++)
          if(nums[i]>nums[i+1])
             swap(nums[i],nums[i+1]);
     }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
       int i=0;
        
        while(i<m&&n>0)
        {
            if(nums1[i]<nums2[0])
            {
                i++;
            }
            else
            {
                swap(nums1[i],nums2[0]);
                semisort(nums2,n);
                i++;
            }
        }
        for(int i=m;i<n+m;i++)
            nums1[i]=nums2[i-m];
    }
   
};
