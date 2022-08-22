class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
    sort(intervals.begin(), intervals.end());
  vector < vector < int >> merged;
vector<int>v;
        
   int n=intervals.size(), start=intervals[0][0],end=intervals[0][1],flag=0;     
        
        
        
  for (int i = 0; i < n; i++) 
  {
      if(end<intervals[i][0])
      {
          merged.push_back({start,end});
          start=intervals[i][0];
      }
               end=max(end,intervals[i][1]);
  }
        
        if(merged.empty()|| merged.back()[1]!=intervals[n-1][1])
            merged.push_back({start,end});
        
  return merged;    
    }
};
