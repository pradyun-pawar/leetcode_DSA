class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        vector<int> storeNumber = {};
        while(x > 0)
        {
            storeNumber.push_back(x % 10);
            x = x / 10;
        }

        int size = storeNumber.size();
        for (int i = 0; i < size/2; i++)
        {
            if(storeNumber[i] != storeNumber[size - 1 - i]) 
                return false;
        }
        return true;
    }
};