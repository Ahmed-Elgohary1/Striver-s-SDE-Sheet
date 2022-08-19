class Solution {
public:
    bool isPossible(vector<int>& nums) 
    {
     vector<pair<int,int>>freq;
      int temp=nums[0],count=0;
       
      for(int num:nums)
      {
          if(num==temp)
              count++;
          else if(num==temp+1)
          {
              freq.push_back({temp,count});
              temp=num;
              count=1;
          }
          else
              return false;
      }
        
        
        
        
        
    }
};
