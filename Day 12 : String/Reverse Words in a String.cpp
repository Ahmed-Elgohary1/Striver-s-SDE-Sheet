class Solution {
public:
    string reverseWords(string s) 
    {
        string ans="",temp="";
        s+=' ';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                temp+=ans;
                if(temp!=ans)
                ans=" ";
                else
                    ans="";
                ans+=temp;
                temp="";
            }
            else
            {
                temp+=s[i];
            }
            
        }
        ans = ans.substr(1 );
        
        return ans;
    }
};
