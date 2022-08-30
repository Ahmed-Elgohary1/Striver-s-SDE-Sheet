class Solution {
public:
    int minInsertions(string s) 
    {
        int ans=0,bal=0,temp=0;
        
        for(int i=0;i<s.size();i++)
        {
           if(s[i] =='(')
               bal+=2;
            else
            {
                if(  i<s.length()-1 && s[i+1]==')'){
                    if(bal==0)
                        ans++;
                    else
                    bal-=2;
                    i++;
                }
                else
                {
                    if(bal==0)
                        ans+=2;
                    else
                    {
                        bal-=2;
                        ans++;
                    }
                }
            }
            
        }
      
         
        return bal+ans;
    }
};
