class Solution {
public:

    void dfs(vector<int>& edges,int node,int step,vector<int>& visit,vector<bool>&v)
    {
        visit[node]=step;
        v[node]=true;
        if(edges[node]!=-1 )
        {
            if(!v[edges[node]])
            dfs(edges,edges[node],step+1,visit,v);
        }
    }

    int calculate(vector<int>& visit1,vector<int>& visit2)
    {
        int n= visit1.size(),ans=1e9,temp,ind=-1;
        for(int i=0;i<n;i++)
        {
            if(visit1[i]==-1 || visit2[i]==-1)
             continue;

            temp= max(visit1[i],visit2[i]);
          
            if(ans>temp)
              {
                  ans=temp;
                  ind=i;
              }
        }
        return ind;
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<int>visit1(n,-1),visit2(n,-1);
        vector<bool>v1(n),v2(n);
        dfs(edges,node1,0,visit1,v1);
        dfs(edges,node2,0,visit2,v2);

        return calculate(visit1,visit2);
    }
};
