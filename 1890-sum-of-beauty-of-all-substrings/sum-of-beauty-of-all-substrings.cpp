class Solution {
public:
    int beautySum(string s) {
        map<char, int> mpp;
        int sum = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = 0; i < s.size(); ++i) {
            mpp.clear();  
            for (int j = i; j < s.size(); ++j) {
                mpp[s[j]]++;  
                int one = INT_MAX;
                int two = INT_MIN;
                for (auto it : mpp) {
                    if (it.second != 0) {
                        one = min(one, it.second);
                        two = max(two, it.second);
                    }
                }
                
                sum += (two - one);
            }
        }
        return sum;
    }
};
