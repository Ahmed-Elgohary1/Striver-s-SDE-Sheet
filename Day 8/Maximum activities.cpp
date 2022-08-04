#include <bits/stdc++.h>
struct meeting 
{
  int start;
  int end;
};

bool comparator(struct meeting m1,struct meeting m2)
{
    if(m1.end<m2.end)
        return true;
 
    
    return false;
}



int maximumActivities(vector<int> &start, vector<int> &finish) {
struct meeting meet[start.size()];
    for(int i=0;i<start.size();i++)
    {
        meet[i].start=start[i];
        meet[i].end=finish[i];
    }
 sort(meet, meet + start.size(), comparator);
    int limit=meet[0].end;
    int ans=1;
    for(int i=1;i<start.size();i++)
    {
        if(meet[i].start>=limit)
        {
          ans++;
          limit=meet[i].end;
        }
        
    }
    return ans;
}
