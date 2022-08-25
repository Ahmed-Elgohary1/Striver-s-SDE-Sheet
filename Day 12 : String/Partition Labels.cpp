class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        
        vector<int>ans;
        unordered_map<char,int> frq;
        unordered_map<char,int> visited;

        for(char str:s)
        {
            if(frq.find(str)==frq.end())
              frq[str]=1;
            else
                frq[str]++;     
        }
        int flag=0, count=0;
        
        for(char str:s )
        {
            if(visited.find(str)==visited.end())
            {
                visited[str]=1;
                flag+=(frq[str]-1);
            }
            else
            {
                flag--;
            }
            count++;
            if(!flag)
            { 
                ans.push_back(count);
                count=0;
             }
        }        
        return ans;
    }
};
