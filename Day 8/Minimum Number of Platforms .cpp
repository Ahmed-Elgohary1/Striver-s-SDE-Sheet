#include <bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) 
{
    sort(at,at+n);
    sort(dt,dt+n);
int i=1,j=0,count=1,ans=1;
while(i<n&&j<n)
{
    if(at[i]<=dt[j])
    {
        count++;
        i++;
    }
    else
    {
        count--;
        j++;
    }
    ans=max(ans,count);
}
   
   return ans; 
}






