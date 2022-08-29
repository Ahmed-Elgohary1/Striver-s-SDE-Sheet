class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) 
    {
    
        sort(special.begin(),special.end());
        
        int ans=max(special.front()-bottom,top-special.back());
        
        for(int i=0;i<special.size()-1;i++)
        {
            ans=max(ans,special[i+1]-special[i]-1);
        }
        
        return ans;
    }
};
