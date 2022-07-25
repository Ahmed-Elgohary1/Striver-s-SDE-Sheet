class Solution {
public:
    double myPow(double x, int n) {
     long long  i=abs(n);
        double temp=1.0;
        while(i>0)
        {
         if(i%2)
         {
             temp*=x;
             i--;
         }
            else
            {
            x*=x;
                i/=2;
            }
        }
        
      if(n<0)
          temp=(double)(1.0) / (double)(temp);
        
        return temp;
    }
};
