class Solution {
public:
    int myAtoi(string s) {
        bool keep = false;
        bool keep2 = false;
        int ans = 0;
        long long result = 0; // Use long long to handle overflow
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && keep2 == false)
                continue;
            if (s[i] == ' ' && keep2 == true)
                break;
            else if (s[i] == '.')
                break;
            else if(s[i]=='-' && s[i+1]=='+' || s[i]=='+' && s[i+1]=='-') return 0;
            else if (s[i] == '-' && keep2 == false) {
                keep = true;
                keep2 = true; // Ensure keep2 is set to true to avoid continuous
                              // '-' processing
                continue;
            } else if ((s[i] == '-'||s[i] =='+') && keep2 == true) {
                break;
            } else if (s[i] == '+' &&
                       keep2 == false) { // Handle the case of leading '+'
                keep2 = true;
                continue;
            } else if (isdigit(s[i]) && count < 11) {
                result = result * 10;
                ans = s[i] - '0';
                keep2 = true;
                if (ans == 0 && result == 0)
                    continue;
                result = result + ans;
                count++;

                // Check for overflow conditions and round appropriately
                if (result > INT_MAX) {
                    return keep ? INT_MIN : INT_MAX;
                }
            } else if (count == 11 &&
                       keep == true) { // Fix typo: use '==' instead of '='
                return INT_MIN;
            } else if (count == 11 &&
                       keep ==
                           false) { // Handle the overflow for positive numbers
                return INT_MAX;
            } else if (isalpha(s[i])) {
                break;
            }
        }
        if (keep == true) {
            result = -result;
        }

        // Ensure result is within the 32-bit signed integer range
        if (result < INT_MIN)
            return INT_MIN;
        if (result > INT_MAX)
            return INT_MAX;

        return static_cast<int>(result);
    }
};
