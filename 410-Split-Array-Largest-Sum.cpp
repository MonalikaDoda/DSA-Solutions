class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int mid) {
        int subArrays = 1;
        int currentArray = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (currentArray + nums[i] <= mid) {
                currentArray += nums[i];
            } else {
                subArrays++;
                currentArray = nums[i];
            }
        }
        if (subArrays > k) {
            return false;
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int end = sum;
        int mid = start + (end - start) / 2;
        int ans = -1;
        while (start <= end) {
            if (isPossible(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};