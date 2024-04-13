class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m==0) return false;
        int n = matrix[0].size();
        if(n==0) return false;
        for (int i = 0; i < m; i++) {
            int value1 = matrix[i][0];
            int value2 = matrix[i][n - 1];
            if (target >= value1 && target <= value2) {
                int high = n - 1;
                int low = 0;
                while(high>=low){
                    int mid = (low + high) / 2;
                    if (matrix[i][mid] == target) {
                        return true;
                    }
                    if (target < matrix[i][mid]) {
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};