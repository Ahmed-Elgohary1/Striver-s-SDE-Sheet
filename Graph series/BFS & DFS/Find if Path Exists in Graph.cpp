class Solution {
public:

    //Approach #1

    bool bfs(int source,int destination,unordered_map<int,vector<int>>&graph,
                vector<bool>&visit)
        {
          queue<int>q;

          visit[source]=true;
          q.push(source);

          while(!q.empty())
          {
              int cur=q.front();
              q.pop();

            if(cur==destination)
                return true;

            for(auto& next:graph[cur])
            {
                if(!visit[next])
                {
                    visit[next]=true;
                    q.push(next);
                }
            }    

          }
        return false;
        } 

    //Approach #2
     bool dfs(int cur,int source,int destination,unordered_map<int,vector<int>>&graph,
                vector<bool>&visit)
          {
            if(cur==destination)
             return true;

            if(!visit[cur])
            {
                visit[cur]=true;
                for(auto&next:graph[cur])
                {
                    if(dfs(next,source,destination,graph,visit))
                      return true;
                }
            }
            return false;

          }  

    //Approach #3
    bool dfs_itr(int source,int destination,unordered_map<int,vector<int>>&graph,
                vector<bool>&visit)
        {
          stack<int>st;

          visit[source]=true;
          st.push(source);

          while(!st.empty())
          {
              int cur=st.top();
              st.pop();

            if(cur==destination)
                return true;

            for(auto& next:graph[cur])
            {
                if(!visit[next])
                {
                    visit[next]=true;
                    st.push(next);
                }
            }    

          }
        return false;
        } 


    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int,vector<int>>graph;
        //insert edges
        for(auto& edge:edges)
        {
            int a = edge[0], b = edge[1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        vector<bool>visit(n,false);

        return dfs_itr(source,destination,graph,visit);
    }
};
