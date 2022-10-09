class Solution {
public:
    int memo[109][109]={0};
    int uniquePaths(int m, int n) {
        if(m<=0||n<=0)
            return 0;
        if(memo[m][n]!=0)
            return memo[m][n];
        if(m==1&&n==1)
            return 1;
        int count=uniquePaths( m-1, n)+uniquePaths(m, n-1);
       memo[m][n]=count;
        return count; 
    }
};
