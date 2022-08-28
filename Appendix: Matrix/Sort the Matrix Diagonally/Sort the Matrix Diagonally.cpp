class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        vector<int>temp;
        int n=mat.size(),m=mat[0].size();
        
        //top row starting diagonals
        
        for(int r=0;r<m;r++)
        {
            temp.clear();
            for(int j=0,i=r;j<n&&i<m;i++,j++)
                temp.push_back(mat[j][i]);
            sort(temp.begin(),temp.end());
            
            //update old values in the mat
             for(int j=0,i=r;j<n&&i<m;i++,j++)
                mat[j][i]=temp[j];
        }
        
         // leftmost column starting diagonals
        
        for(int c=1;c<n;c++)
        {
            temp.clear();
            for(int j=0,i=c;j<m&&i<n;i++,j++)
                temp.push_back(mat[i][j]);
            sort(temp.begin(),temp.end());
            
            //update old values in the mat
             for(int j=0,i=c;j<m&&i<n;i++,j++)
                mat[i][j]=temp[j];
        }
       return mat; 
    }
};
