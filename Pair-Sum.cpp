#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   int n = arr.size();
   vector<vector<int>> ans;
   for(int i =0; i<n;i++){
      for(int j = i+1; j<n; j++){
         if(arr[i]+arr[j]==s){
            if(arr[i]>arr[j]){
               ans.push_back({arr[j],arr[i]});
            }
            else{
               ans.push_back({arr[i],arr[j]});
            }
         }
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
}
