#include<bits/stdc++.h>

int countSmall (vector<int>&r,int target)
{
    int low=0,high=r.size()-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(r[mid]<=target)
            low=mid+1;
        else
            high=mid-1;
    }
   return low; 
}

int getMedian(vector<vector<int>> &matrix)
{
int low=1,high=1e5+9,n=matrix.size(),m=matrix[0].size();
    
while(low<=high)
{
    int mid=(low+high)/2,count=0;
    
    for(int i=0;i<n;i++)
    {
        count+=countSmall(matrix[i],mid);
    }
    
    if(count<=(n*m)/2)
        low=mid+1;
    else
        high=mid-1;
}
   return low;
}
