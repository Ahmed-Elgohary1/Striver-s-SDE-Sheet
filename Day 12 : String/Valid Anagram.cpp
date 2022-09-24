class Solution {
public:
    bool isAnagram(string s, string t) 
    {
    
        unordered_map<char,int>frq;
       string temp;
        if(t.size()>s.size())
        {
           swap(t,s);
        }
        
        for(char c:s)
            frq[c]++;
        
        for(char c:t)
        {
            if(frq.find(c)==frq.end())
                return false; 
            
            frq[c]--;
            
            if(frq[c]<1)
                frq.erase(c);
            
        }
        
        return frq.size()==0;
    }
};
