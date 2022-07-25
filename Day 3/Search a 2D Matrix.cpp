class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
    int temp=-1,hit=matrix.size(),lot=0,hil=matrix[0].size(),lol=0;
    if(target<matrix[0][0]||target>matrix[hit-1][hil-1])
        return false;
        
      for(int i=0;i<hit;i++)
      {
         if( binary_search(matrix[i].begin(), matrix[i].end(), target))
             return true;
      }
       return false; 
        
    }
};
