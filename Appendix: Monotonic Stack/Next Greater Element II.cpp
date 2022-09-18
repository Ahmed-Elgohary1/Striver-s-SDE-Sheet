class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
    
        int n=nums.size();
        vector<int>st,ans(n,-1);
        
        int cur;
        
        for(int i=0;i<2*n;i++)
        {
          cur=nums[i%n];
          
          while(st.size()&&nums[st.back()]<cur)
          {
              ans[st.back()]=cur;
              st.pop_back();
          }
            
           st.push_back(i%n); 
            
        }
        
       
        
        return ans;
    }
};
