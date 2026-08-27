bool isPossible(vector<int> &stalls, int k, long long mid){
    int cowCount = 1;
    int lastPosition = stalls[0];
    for(int i =0; i<stalls.size(); i++){
        if(stalls[i]-lastPosition>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    long long start = 0;
    long long end = stalls[stalls.size()-1] - stalls[0];
    long long mid = start + (end - start)/2;
    long long ans = -1;
    while(start<=end){
        if(isPossible(stalls,k,mid)){
            ans = mid;
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
