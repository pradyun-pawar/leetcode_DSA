class Solution {
public:
    void sum(int index,int target,vector<int> &candidates,vector<int> &addition,vector<vector<int>> &result){
        if(target<=0){
            if(target==0){
                result.push_back(addition);
            }
            return;
        }
        for(int i=index;i<candidates.size();i++){
            // Skip duplicates
            if(i > index && candidates[i] == candidates[i-1]) continue;
            // Stop if the current candidate exceeds the target
            if(candidates[i] > target) break;

            addition.push_back(candidates[i]);
            sum(i+1,target-candidates[i],candidates,addition,result);
            addition.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> addition;
        vector<vector<int>> result;
        int index=0;

        sort(candidates.begin(), candidates.end());
        sum(index,target,candidates,addition,result);
        return result;
    }
};