class Solution {
public:
     
int merge(vector<int>&arr,int left,int mid,int right,vector<int>&temp)
{
  int count=0,i=left,j=mid+1,k=left;  
    while (i <= mid && j <= right)
    {
        
            if ((long long) arr[i] > 2 * (long long) arr[j]) {
                
                count = count +  mid - i + 1;
                j++;
                
            } else {
                
                i++;
            }
        }
    i=left,j=mid+1,k=left;  
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
int merge_sort(vector<int>&arr,int left,int right,vector<int>&temp)
{
    int count=0;
    if(right>left)
    {
        int mid=(left+right)/2;
        count+=merge_sort(arr,left,mid,temp);
        count+=merge_sort(arr,mid+1,right,temp);
        count+=merge(arr,left,mid,right,temp);
    }
   return count; 
}


    
int reversePairs(vector<int>& nums)
{
    int n=nums.size() ;
    vector<int>temp(n);  
     return merge_sort(nums,0,n-1,temp);
   
}
};
