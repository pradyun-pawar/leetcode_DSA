class Solution {
public:
    bool equalFrequency(string word) {
        map<char, int> freq;
        
        // Count frequencies of each character
        for (char c : word) {
            freq[c]++;
        }

        map<int, int> freqCount;
        
        // Count frequencies of the frequencies
        for (const auto &p : freq) {
            freqCount[p.second]++;
        }

        // If there's only one type of frequency
        if (freqCount.size() == 1) {
            auto it = freqCount.begin();
            // If the frequency is 1, it means all characters are unique, 
            // removing one character still makes all frequencies equal to 1
            if (it->first == 1) return true;
            // If we have more than 1 character with the same frequency,
            // removing one character will make all others equal
            if (it->second == 1) return true;
        }

        // If there are exactly two different frequencies
        if (freqCount.size() == 2) {
            auto it1 = freqCount.begin();
            auto it2 = std::next(it1);

            // Case 1: One character with frequency 1, removing it makes others equal
            if (it1->first == 1 && it1->second == 1) return true;

            // Case 2: Frequencies differ by 1 and higher frequency occurs once, 
            // reducing it by one makes all frequencies equal
            if (it2->first == it1->first + 1 && it2->second == 1) return true;
        }

        return false;
    }
};