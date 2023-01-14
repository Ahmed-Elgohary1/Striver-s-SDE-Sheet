class Solution {
public:

    void join (int a,int b,vector<int>&set)
    {
        a=find(a,set);
        b=find(b,set);

        if(a>b)
         swap(a,b);

        set[b]=a; 
    }

    int find(int x,vector<int>&set) {
        if (set[x] == x) {
            return x;
        }
        
        return set[x] = find(set[x],set);
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int>uf(26);
         for (int i = 0; i < 26; ++i) uf[i] = i;

        for(int i=0;i<s1.size();i++)
        {
            join(s1[i]-'a',s2[i]-'a',uf);
        }

        string ans="";
        for(char c:baseStr)
        {
            int x=find(c-'a',uf);
            ans+=(char)(x+'a');
        }

        return ans;
    }
};
