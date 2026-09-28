void merge(vector<int> &arr, int s, int e){
    int mid = s + (e-s)/2;

    int i = s;
    int j = mid+1;
    vector<int> temp;

    while(i<=mid && j<=e){
        if(arr[i]>arr[j]){
            temp.push_back(arr[j++]);
        } else{
            temp.push_back(arr[i++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }

     while(j <= e){
        temp.push_back(arr[j++]);
    }

    for(int k = 0; k < temp.size(); k++)
        arr[s+k] = temp[k];
}

void sort(vector<int> &arr, int s, int e){
    if(s>=e)
    return;

    int mid = s + (e-s)/2;

    // to sort left part
    sort(arr, s, mid);

    // to sort right part
    sort(arr, mid+1, e);

    // to merge
    merge(arr, s, e);
}

void mergeSort(vector < int > & arr, int n) {
    sort(arr, 0, n-1);
}
