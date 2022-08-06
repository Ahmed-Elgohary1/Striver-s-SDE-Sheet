
double power (double x,int n)
{
    int i=n;
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
    return temp;
}

double findNthRootOfM(int n, int m) 
{
double low=1,high=m,eps=1e-8;
    
 while((high-low) > eps)
 {
     double mid=(high+low)/2.0;
     if(power(mid,n)<m)
         low=mid;
     else
         high=mid;
 }
    
    return high;
}




