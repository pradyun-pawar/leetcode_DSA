class Solution {
public:
    void sum(int index,int target,vector<int>&candidates,vector<vector<int>>&answer,vector<int>&addition){
        if(target<=0){
            if(target==0){
                answer.push_back(addition);
            }
            return;
        }
        for(int i=index;i<candidates.size();i++){
            addition.push_back(candidates[i]);
            sum(i,target-candidates[i],candidates,answer,addition);
            addition.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int index=0;
        vector<vector<int>> answer;
        vector<int> addition;

        sum(index,target,candidates,answer,addition);
        return answer;
    }
};