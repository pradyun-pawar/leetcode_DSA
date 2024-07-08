class Solution {
public:
    vector<vector<int>> saloni(int index,vector<int> &nums,vector<int> &result){
        vector<vector<int>> final;
        if(index >= nums.size()){
            final.push_back(result);
            return final;
        }
        result.push_back(nums[index]);
        vector<vector<int>>include=saloni(index + 1,nums,result);
        final.insert(final.end(), include.begin(), include.end());

        result.pop_back();
        vector<vector<int>>exclude=saloni(index + 1,nums,result);
        final.insert(final.end(), exclude.begin(), exclude.end());
        return final;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size() == 0) return {};
        vector<int> result;
        return saloni(0,nums,result);
    }
};