#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) 
{
    int  cur=1,last1=1,last2=1,mod=1e9+7;
    for(int i=2;i<=nStairs;i++)
    {
        cur=(last1+last2)%mod;
        last2=last1;
        last1=cur;
    }
    return cur%mod;
}
