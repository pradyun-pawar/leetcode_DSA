class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m==0) return false;
        int n = matrix[0].size();
        if(n==0) return false;
        int row=0;
        int column=n-1;
        while(row<=m-1 && column>=0){
            if(target>matrix[row][column]){
                row++;
            }
            else if(target==matrix[row][column]){
                return true;
            }
            else{
                column--;
            }
        }
        return false;
    }
};