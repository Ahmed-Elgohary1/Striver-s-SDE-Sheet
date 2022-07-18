class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mn=1e5,mx=0,ans=0;
 for(int i=0;i<prices.size();i++)
 {
     mx=max(prices[i],mx);
    ans=max(ans,mx-mn);
     if(mn>prices[i])
     {
      mn=prices[i];   
         mx=0;
     }
 }
    return ans;
        
    }
};
