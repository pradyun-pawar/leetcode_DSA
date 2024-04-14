class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        if (m == 0) return {-1, -1};
        int n = mat[0].size();
        int low = 0;
        int high = n - 1;
        int maxRow = -1;
        int peakColumn = -1;
        int first=0;

        while (low <= high) {
            int mid = (high + low) / 2;
            maxRow = -1; 
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > maxRow) {
                    maxRow = mat[i][mid];
                    first = i; 
                }
            }

            if (mid > 0 && mat[first][mid - 1] > maxRow) {
                high = mid - 1;
            } else if (mid < n - 1 && mat[first][mid + 1] > maxRow) {
                low = mid + 1; 
            } else {
                // peakColumn = mid;
                // break;
                if(mat[first][mid]>-1){
                    return {first,mid};
                }
            }
        }

        // if (peakColumn != -1) {
        //     maxRow = -1;
        //     for (int i = 0; i < m; i++) {
        //         if (mat[i][peakColumn] > maxRow) {
        //             maxRow = mat[i][peakColumn];
        //             first = i;
        //         }
        //     }
        //     return {first, peakColumn};
        // }
        return {-1, -1};
    }
};
