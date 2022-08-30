class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) 
    {
        vector<int>temp;
        if(grid[0].size()==1&&grid.size()==1)
            return 0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                temp.push_back(grid[i][j]);
            }
        sort(temp.begin(),temp.end());
        int mid=temp.size()/2,ans=0;
        mid=temp[mid];
        
        for(int num:temp)
        {
            if(abs(mid-num)%x)
                return -1;
            ans+=(abs(mid-num)/x);
        }
     return ans;   
    }
};
