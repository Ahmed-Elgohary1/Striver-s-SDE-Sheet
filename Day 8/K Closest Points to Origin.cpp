class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<double, pair<int, int>>> nodes;
        
        for(int i = 0 ; i < points.size(); i++)
        {
            double dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            dist = sqrt(dist);
            nodes.push({dist, {points[i][0], points[i][1]}});   
            
            if(nodes.size() > k)
                nodes.pop();
        }
        vector<vector<int>> ans;
        while(!nodes.empty())
        {
            ans.push_back({nodes.top().second.first, nodes.top().second.second});
            nodes.pop();
        }
        return ans;
    }
};
