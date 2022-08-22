class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
      priority_queue<int>q;
      
        for(int num:nums)
            q.push(num*num);
        
        int n=nums.size()-1;
        
        while(!q.empty())
        {
            nums[n]=q.top();
            q.pop();
            n--;
            
        }
        
        return nums;
    }
};
