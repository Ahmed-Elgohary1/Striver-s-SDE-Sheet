class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) 
    {
    vector<vector<int>>ans;
     int k=0,i=0,j=0,n=first.size(),m=second.size();   
        
     while(i<n&&j<m)
     {
         int start =max(first[i][0],second[j][0]);
         int end =min(first[i][1],second[j][1]) ;
         
         if(start<=end)
             ans.push_back({start,end});
         
         if(first[i][1]>second[j][1])
             j++;
         else
             i++;
    
     }
    return ans;    
    }
};
