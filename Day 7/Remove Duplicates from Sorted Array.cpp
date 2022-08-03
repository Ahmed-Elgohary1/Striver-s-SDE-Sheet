class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
    int count=1,temp=nums[0], slow=0;
        
      for(int num:nums)
      {
          if(temp!=num)
          {
              count++;
              temp=num;
             slow++;
              nums[slow]=num;
          }
      }
      return count;  
    }
};
