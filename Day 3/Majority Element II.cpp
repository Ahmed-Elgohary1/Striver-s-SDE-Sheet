class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         unordered_map<int,int>m;
        vector<int>ans;
        for(int num:nums)
        {
          m[num]++;    
        }
        for(auto nm:m)
        {
            if(nm.second>(nums.size()/3))
            {
              ans.push_back(nm.first);  
            }
        }
        
        return ans;
    }
};

