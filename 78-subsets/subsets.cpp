class Solution {
public:
    void saloni(int index, vector<int>&nums, vector<int>&current, vector<vector<int>>&result){
        if(index==nums.size()){
            result.push_back(current);
            return;
        }
        //include
        current.push_back(nums[index]);
        saloni(index+1,nums,current,result);
        //exclude
        current.pop_back();
        saloni(index+1,nums,current,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0) return {};
        vector<int> current;
        vector<vector<int>> result;
        int index=0;

        saloni(index,nums,current,result);
        return result;
    }
};