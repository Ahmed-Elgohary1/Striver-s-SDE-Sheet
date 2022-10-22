class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>count;
        int flag=0;
        for(char c:t)
        {
          count[c]++;
          flag++;
        }
        
        int l=0,r=0,ans=INT_MAX,start=0,end=0;
        
    for(int r=0;r<s.size();r++)
        {
            char c=s[r];

            if(count[c]>0)
                flag--;

            count[c]--;

            if(flag==0)
            {
                while(l<r && count[s[l]]<0 )
                {
                    count[s[l]]++;
                    l++;
                }
                
                if(ans>r-l+1)
                {
                    start=l;
                    end=r;
                    ans=r-l+1;
                }
                count[s[l]]++;
                    l++;
                flag++;
            }
        }
        return ans==INT_MAX? "": s.substr(start,ans);
    }
};
