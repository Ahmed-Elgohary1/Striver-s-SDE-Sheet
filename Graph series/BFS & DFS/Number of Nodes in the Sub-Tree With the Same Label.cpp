class Solution {
public:
    

    void add(vector<int>&result,vector<int>&temp)
    {
        for(int i=0;i<26;i++)
        {
            result[i]+=temp[i];
        }
    }


    vector<int>dfs(int node,vector<vector<int>>& graph,vector<bool>&visit,vector<int>&ans,
                     string &labels)
     {
         vector<int>temp(26,0);
        
         visit[node]=true;
        
         for(int next:graph[node])
         {
             if(!visit[next])
             {
                 vector<int>branch(26);
                 branch=dfs(next,graph,visit,ans,labels);
                 add(temp,branch);
             }
         }   

         char c=labels[node];
         temp[c-'a']++;
         ans[node]=temp[c-'a'];

        return temp;
     }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>>graph(n);
        vector<bool>visit(n);
        vector<int>ans(n,0);

        for(vector<int>v:edges)
        {
            int from=v[0],to=v[1];
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        vector<int>temp=dfs(0,graph,visit,ans,labels);

        return ans;
    }
};
