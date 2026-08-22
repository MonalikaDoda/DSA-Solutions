pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n -1;
    int mid = start + (end-start)/2;
    int first = -1;
    int last = -1;

    while(start<=end){
        if(arr[mid]==k){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]>k){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }

    start = 0;
    end = n -1;
    mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            last = mid;
            start = mid +1;
        }
        else if(arr[mid]>k){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }
    return {first,last};
}
