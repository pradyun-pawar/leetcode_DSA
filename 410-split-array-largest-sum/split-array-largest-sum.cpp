class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
            maxi = max(maxi, arr[i]);
        }
        int low = maxi;
        int high = sum;
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 1;
            int currSum = 0;
            for (int i = 0; i < n; i++) {
                currSum += arr[i];
                if (currSum > mid) {
                    count++;
                    currSum = arr[i];
                }
            }
            if (count > k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};