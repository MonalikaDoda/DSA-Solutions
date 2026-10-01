#include <bits/stdc++.h> 

int partition(vector<int> &arr, int s, int e){
    int pivotElement = arr[s];
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i]<pivotElement){
            count++;
        }
    }
    int pivotIndex = s+count;

    swap(arr[s],arr[pivotIndex]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){
        
        while(arr[i]<arr[pivotIndex]){
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
        
    }
    return pivotIndex;

}

void sort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    sort(arr, s, p-1);

    sort(arr, p+1, e);
}

vector<int> quickSort(vector<int> arr)
{
    sort(arr, 0, arr.size()-1);
    return arr;
}
