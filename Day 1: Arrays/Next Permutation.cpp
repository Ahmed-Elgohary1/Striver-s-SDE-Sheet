class Solution {
public:
    void nextPermutation(vector<int>& permutation)
    {
        int n=permutation.size(),k,l;
        for( k=n-1;k>0;k--)
        {
            if(permutation[k-1]<permutation[k])
                        break;
        }
    
    for( l=n-1;l>k-1&&k-1>=0;l--)
        {
            if(permutation[l]>permutation[k-1])
            {
                swap(permutation[l],permutation[k-1]);
                        break;
            }
    }
   
            reverse(permutation.begin()+k, permutation.end());
        
  }      
};
