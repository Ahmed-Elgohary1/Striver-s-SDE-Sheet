#include<bits/stdc++.h>


bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] > v2[1];
}

bool next(int freq[],int n)
{
    for(int i=n;i>0;i--)
    {
       if(freq[i]==0)
       {
         freq[i]=1;
           return true;
       }
    }
  return false;
}

int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(), jobs.end(), sortcol);
    int ans=0;
    int freq[4200]={0};
    for(int i=0;i<jobs.size();i++)
    {
      if(next(freq,jobs[i][0]))
          ans+=jobs[i][1];
    }
    
        return ans;

}
