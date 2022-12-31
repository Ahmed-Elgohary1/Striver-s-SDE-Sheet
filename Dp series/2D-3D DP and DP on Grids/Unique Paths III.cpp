class Solution {
public:
    int oo=1e7;
    int m,n;

    bool out(int indx,int indy)
    {
        
        if(indx<0||indx>=n)
         return true;

        if(indy<0||indy>=m)
         return true;
         
       return false;    
    } 
int ans=0;

    void dfs(int indx,int indy,int temp,int target,vector<vector<int>>& grid)
        {
            if(out(indx,indy))
              return ;

            if(grid[indy][indx]==-1)
             return ;

            if(grid[indy][indx]==2)
            {
                if(temp==target)
                ans++;
                return;
            }

           

            int up,down,left,right,mxy,mxx;
            
            grid[indy][indx]=-1;

            dfs(indx,indy-1,temp+1,target,grid);
            dfs(indx,indy+1,temp+1,target,grid);

            dfs(indx-1,indy,temp+1,target,grid);  
            dfs(indx+1,indy,temp+1,target,grid);

             grid[indy][indx]=0;

            
        }

    int uniquePathsIII(vector<vector<int>>& grid) {
        pair<int,int>start,end;
        m=grid.size();
        n=grid[0].size();
        int target=n*m-1;
        
        for(int i=0;i<grid.size();i++)
          for(int j=0;j<grid[0].size();j++)
              {
                  if(grid[i][j]==1)
                    start=make_pair(i,j);

                  if(grid[i][j]==-1)
                  target--;  
              }
              
        dfs(start.second,start.first,0,target,grid);
        return ans;
    }
};
