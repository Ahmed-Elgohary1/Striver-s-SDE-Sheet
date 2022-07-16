#include <bits/stdc++.h>
struct pos
{
  int r;
  int c;
};

void setZeros(vector<vector<int>> &matrix)
{
  int rows = matrix.size(), cols = matrix[0].size(),a=0;
    vector<struct pos>z;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]==0)
            {
                struct pos s;
                s.r=i;s.c=j;
                z.push_back(s);
                a++;
            }
        }
    for(int i=0;i<a;i++)
    {
       int ro=z[i].r,co=z[i].c; 
        for(int h=0;h<cols;h++)
        matrix[ro][h]=0;
        
        for(int h=0;h<rows;h++)
        matrix[h][co]=0;
    }
    
}
