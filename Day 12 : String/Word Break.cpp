class Solution {
public:
    
   
    bool bfs(int ind,int mx,string s,set<string>frq, vector<int>&memo)
    {
        
        if(ind>=s.size())
            return true;
        if(memo[ind]!=-1)
              return memo[ind];
            
        
        string temp="";
        for(int i=ind;i<s.size();i++)
        {
            
            
            temp+=s[i];
           if(frq.find(temp)!=frq.end())
           {
               memo[ind]=bfs(i+1,mx,s,frq,memo)? 1:0; 
              
           }
            if(temp.size()>mx||memo[ind]==1)
                return memo[ind]==1;
            
        }
        memo[ind]=0;
        return false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) 
    {
     vector<int>memo(1002,-1);
         set<string>frq;
        int mx=0;
        for(string str:wordDict)
        {
            frq.insert(str);
            int c=str.size();
            mx=max(mx,c);
        }
        return bfs(0,mx,s,frq,memo);       
    }
};
