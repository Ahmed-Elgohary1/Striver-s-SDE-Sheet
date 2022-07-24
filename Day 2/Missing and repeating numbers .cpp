#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
long long int S = (n * (n+1) ) /2;
    long long int P = (n * (n +1) *(2*n +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<n; i++){
       S -= (long long int)arr[i];
       P -= (long long int)arr[i]*(long long int)arr[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    pair <int,int> ans;

    ans.second=repeating;
    ans.first=missingNumber;

    return ans;
}
