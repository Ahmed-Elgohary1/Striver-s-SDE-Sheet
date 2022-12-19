class Solution {
public:

    void bfs(vector<vector<int>>& isConnected,vector<bool>&visit,int source)
    {
        queue<int>q;
        q.push(source);

        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            visit[cur]=true;

            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[cur][j]==1&&!visit[j] )
                q.push(j);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        vector<bool>visit(n+1,false);

        int num=0;
        for(int i=0;i<n;i++)
        {
            if(visit[i])
              continue;

            num++;
            bfs(isConnected,visit,i);  
        }


        return num;
    }
};
