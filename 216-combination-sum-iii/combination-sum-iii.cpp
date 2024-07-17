class Solution {
public:
    void sum(int index,int k,int n,vector<vector<int>> &answer,vector<int> &addition){
        if(n<=0 || k==0){
            if(n==0 && k==0){
                answer.push_back(addition);
            }
            return;
        }
        for(int i=index;i<=9;i++){
            addition.push_back(i);
            sum(i+1,k-1,n-i,answer,addition);
            addition.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> answer;
        vector<int> addition;
        int index=1;

        if(k>n) return {};
        sum(index,k,n,answer,addition);
        return answer;
    }
};