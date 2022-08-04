#include<bits/stdc++.h>
struct Item {
   int value;
   int weight;
};
 bool static comp(Item a, Item b)
 {
         double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
  }

double maximumValue (vector<pair<int, int>>& items, int n, int W)
{
 Item arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].weight=items[i].first;
        arr[i].value=items[i].second;
    }
     sort(arr, arr + n, comp);

      int curWeight = 0;
      double finalvalue = 0.0;

      for (int i = 0; i < n; i++) {

         if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
         } else {
            int remain = W - curWeight;
            finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain;
            break;
         }
      }

      return finalvalue;

    
}
