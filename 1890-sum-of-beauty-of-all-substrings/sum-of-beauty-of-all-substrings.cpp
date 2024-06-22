class Solution {
public:
    int beautySum(string s) {
        map<char, int> mpp;
        int sum = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;

        // Outer loop to select the starting point of substrings
        for (int i = 0; i < s.size(); ++i) {
            mpp.clear();  // Clear the frequency map for each new starting point
            
            // Inner loop to select the ending point of substrings
            for (int j = i; j < s.size(); ++j) {
                mpp[s[j]]++;  // Update frequency map for the current substring
                
                // Find the maximum and minimum frequencies in the current substring
                int one = INT_MAX;
                int two = INT_MIN;
                for (auto it : mpp) {
                    if (it.second != 0) {
                        one = min(one, it.second);
                        two = max(two, it.second);
                    }
                }
                
                // Calculate the beauty of the current substring and add it to the sum
                sum += (two - one);
            }
        }

        return sum;
    }
};
