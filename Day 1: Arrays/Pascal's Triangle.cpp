class Solution {
public:
    vector<vector<int>> generate(int numRows) {

vector<vector<int>> printPascal(numRows);
 for(int i=0;i<numRows;i++)
   {
    
     printPascal[i].resize(i + 1);
     for(int j=0;j<=i;j++)
     {
       if(j==0||j==i)
       {
           printPascal[i][j]=1;
        continue; 
       } 
       printPascal[i][j]=printPascal[i-1][j-1]+printPascal[i-1][j];  
         
     }
   }
        return printPascal;
    }
};
