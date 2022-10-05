class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        vector<int>frq(26,0);
        vector<bool>visit(26,false);
        stack<char>st;
        string ans="";
        for(char c:s)
          frq[c-'a']++;

        for(char c:s)
        {
          if(visit[c-'a'])
            {
            frq[c-'a']--;
              continue;
            }

           while(!st.empty() && st.top()>c && frq[st.top()-'a']>0)
           {
               visit[st.top()-'a']=false;
               st.pop();
           } 
           st.push(c);
           visit[c-'a']=true;
           frq[c-'a']--;
        }  

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
