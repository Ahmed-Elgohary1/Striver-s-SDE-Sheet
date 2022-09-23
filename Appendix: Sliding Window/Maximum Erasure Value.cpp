class Solution {
public:
    
   
    
    int maximumUniqueSubarray(vector<int>& nums) 
    {
    int res=nums[0],s=0,start=0,i=0;
        vector<int>v;unordered_map<int,int>m;
        for (auto x:nums)
        {
            s+=x;
            v.push_back(s);
        }
       
        m[nums[0]]=0;
        for(i=1;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end() && m[nums[i]]>=start)
            {
               int ind=m[nums[i]];
               res=max(res,(v[i-1]-v[start]+nums[start]));
               start=ind+1;         
            }
            m[nums[i]]=i; 
        }
      
        res=max(res,v[i-1]-v[start]+nums[start]);
        return res;
    }
};
