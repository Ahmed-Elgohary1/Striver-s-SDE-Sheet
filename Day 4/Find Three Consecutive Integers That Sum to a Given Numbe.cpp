class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
    
        vector<long long>ans;
        if((num+3)%3)
            return ans;
        
        num=(num+3)/3;
        
       
            ans={num-2,num-1,num};
        
        return ans;
    }
};
