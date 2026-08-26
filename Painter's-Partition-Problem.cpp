bool isPossible(vector<int> &boards, int k, long long mid){
    long long currentUnitTime = 0;
    int painters = 1;
    for(int i =0; i<boards.size(); i++){
        if(currentUnitTime + boards[i] <= mid){
            currentUnitTime+=boards[i];
        }
        else{
            painters++;
            currentUnitTime = boards[i];
        }
        if(painters>k){
            return false;
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    long long start = *max_element(boards.begin(), boards.end());
    long long sum = 0;
    for(int i = 0; i < boards.size(); i++){
        sum+=boards[i];
    }
    long long end = sum;
    long long mid = start + (end-start)/2;
    long long ans = -1;
    while(start<=end){
        if(isPossible(boards, k, mid)){
            ans=mid;
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
