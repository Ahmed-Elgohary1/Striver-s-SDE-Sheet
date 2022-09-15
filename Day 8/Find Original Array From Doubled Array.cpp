class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) 
    {
    
        sort(nums.begin(),nums.end());
        unordered_map<int,int>frq;
        vector<int>ans,v;
        if(ans.size()%2)
            return ans;
        for(int i=0;i<nums.size();i++)
        {
            if(frq[nums[i]]!=0)
                frq[nums[i]]--;
            else
            {
                ans.push_back(nums[i]);
                int temp=  2*nums[i];
                frq[temp]++;
            }
            
        }
        return (nums.size()/2)==ans.size()? ans:v;
    }
};
