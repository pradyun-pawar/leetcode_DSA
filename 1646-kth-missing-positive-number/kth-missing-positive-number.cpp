class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount = 0;
        int i = 0;
        int currentNumber = 1;

        while (missingCount < k) {
            if (i < arr.size() && arr[i] == currentNumber) {
                i++;
            } else {
                missingCount++;
            }
            if (missingCount == k) {
                return currentNumber;
            }
            currentNumber++;
        }

        return -1;                   
    }
};