class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        set<int, greater<int> > s;
        for(int num:nums)
        {
            s.insert(num);
        }
        int count=0,temp=1e9+9, ans=0;
        for(auto itr = s.begin(); itr != s.end(); itr++)
        {
           if(temp-*itr==1)
           {
               count++;
           }
            else
                count=1;
            
           temp=*itr; 
                        ans=max(ans,count);

        }
        
        return ans;
    }
};
