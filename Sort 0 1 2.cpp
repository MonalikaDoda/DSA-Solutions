#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zeroPos = 0;
   int current = 0;
   int twoPos = n-1;

   while(current<=twoPos){
      if(arr[current]==0){
         swap(arr[zeroPos], arr[current]);
         current++;
         zeroPos++;
      }
      else if(arr[current]==2){
         swap(arr[current], arr[twoPos]);
         twoPos--;
      }
      else {
         current++;
      }
   }
}
