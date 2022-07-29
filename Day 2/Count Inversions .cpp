#include <bits/stdc++.h> 
#define ll long long 
ll merge(ll *arr,ll left,ll mid,ll right,ll *temp)
{
  ll count=0,i=left,j=mid+1,k=left;  
    
   while(i<=mid &&j<=right)
   {
       if(arr[i]<=arr[j])
       {
           temp[k]=arr[i];
           k++; i++;
       }
       else
       {
           temp[k]=arr[j];
           if(arr[i]>arr[j])
             count=count+(mid-i+1);
           k++;j++;
           
       }
   }
    
    while(i <= mid )
        temp[k++] = arr[i++];

    while(j <=right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return count;
    
}

ll merge_sort(long long *arr,ll left,ll right,ll *temp)
{
    ll count=0;
    if(right>left)
    {
        int mid=(left+right)/2;
        count+=merge_sort(arr,left,mid,temp);
        count+=merge_sort(arr,mid+1,right,temp);
        count+=merge(arr,left,mid,right,temp);
    }
   return count; 
}

long long getInversions(long long *arr, int n)
{
    ll temp[n];
return merge_sort(arr,0,n-1,temp);
 }
