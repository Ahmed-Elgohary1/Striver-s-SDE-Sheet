class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>lnum;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(lnum.find(nums[i])==lnum.end())
            {
                if(lnum.find(target-nums[i])!=lnum.end())
                {
                    ans.push_back(lnum[target-nums[i]]);
                    ans.push_back(i);
                        return ans;      
                }
                else 
                    {
                       lnum[nums[i]]=i; 
                    }
            }
            else if(lnum.find(target-nums[i])!=lnum.end())
            {
                  ans.push_back(lnum[target-nums[i]]);
                    ans.push_back(i);
                        return ans;
            }
        }
        return ans;
    }
};
