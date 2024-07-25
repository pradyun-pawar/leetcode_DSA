class Solution {
public:
    string largestTimeFromDigits(std::vector<int>& arr) {
        sort(arr.begin(), arr.end());
        std::string answer = "";

        do {
            int hours = arr[0] * 10 + arr[1];
            int minutes = arr[2] * 10 + arr[3];
            if (hours < 24 && minutes < 60) {
                std::string current = std::to_string(arr[0]) + std::to_string(arr[1]) + ':' + std::to_string(arr[2]) + std::to_string(arr[3]);
                if (current > answer) {
                    answer = current;
                }
            }
        } while (next_permutation(arr.begin(), arr.end()));

        return answer;
    }
};