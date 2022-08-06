class Solution {
public:
   int findMin(vector<int>& nums) {
        int n=nums.size();
      
        int start = 0;
        int end= n-1;
        while(start<=end)
        {
            if(nums[start]<=nums[end])
                return start;
            int mid=start + (end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid-1+n)%n;
            if((nums[next]>=nums[mid])&&(nums[prev]>=nums[mid]))
            {
                return mid;
            }
            else if(nums[start]<=nums[mid])
            {
                start=mid+1;
            }
            else 
            {
                end=mid-1;
            }
        }
        return 0;
    }
    
    int search(vector<int>& nums, int target) 
    {
     int k=findMin(nums),n=nums.size()-1,l,r;
     
        if(target>nums[n])
        {
            l=0;
            r=k-1;
        }
        else
        {
            l=k;  
            r=n;
        }
        
        while(l<=r)
        {
            int mid=l + (r-l)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            if(target>nums[mid])
                l=mid+1;
            else 
                r=mid-1;
        }
        return -1;
    }
    
};
