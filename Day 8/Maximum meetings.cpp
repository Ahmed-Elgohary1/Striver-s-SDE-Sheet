#include <bits/stdc++.h>
struct meeting 
{
  int start;
  int end;
  int pos; 
};

bool comparator(struct meeting m1,struct meeting m2)
{
    if(m1.end<m2.end)
        return true;
    else if(m1.end>m2.end)
        return false;
    else if(m1.pos<m2.pos)
        return true;
    
    return false;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) 
{
struct meeting meet[start.size()];
    for(int i=0;i<start.size();i++)
    {
        meet[i].start=start[i];
        meet[i].end=end[i];
        meet[i].pos=i+1;
    }
 sort(meet, meet + start.size(), comparator);
    int limit=meet[0].end;
    vector<int>ans;
    ans.push_back(meet[0].pos);
    for(int i=1;i<start.size();i++)
    {
        if(meet[i].start>limit)
        {
          ans.push_back(meet[i].pos);
          limit=meet[i].end;
        }
        
    }
    return ans;
}





