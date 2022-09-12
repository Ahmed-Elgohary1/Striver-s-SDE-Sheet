class Solution {
public:
    
    
    void sell(vector<int>& tokens,int *power,int *score, int* j ,int oo)
    {
        if(*j<0)
                return;
        while(tokens[*j] == oo)
        {
           *j-=1;
            
        }
        *power+=tokens[*j];
        *score-=1;
        tokens[*j]=oo;
    }
    
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
    
        if(tokens.size()==0)
            return 0;
        int ans=1,score=1,oo=1e5,j=tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        power-=tokens[0];
        if(power<0)
         return 0;
        
        for(int i=1;i<tokens.size();i++)
        {
            if(power>=tokens[i])
            {
                score++;
                power-=tokens[i];
            }
            else if(score>0)
            {
                sell(tokens,&power,&score,&j,oo);
                i--;
            }
            ans=max(score,ans);
        }
        return ans;
    }
};
