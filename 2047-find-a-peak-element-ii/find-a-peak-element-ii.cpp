class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int maxi = INT_MIN;
        vector<int> answer;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] > maxi) {
                    answer.clear();
                    maxi = max(maxi, mat[i][j]);
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        return answer;
    }
};