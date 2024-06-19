class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        // Create a frequency map for letters
        unordered_map<char, int> letterCount;
        for (char letter : letters) {
            ++letterCount[letter];
        }
        
        // Helper function to calculate the score of a word
        auto calculateWordScore = [&](const string& word) -> int {
            int wordScore = 0;
            unordered_map<char, int> tempCount = letterCount;
            for (char c : word) {
                if (tempCount[c] > 0) {
                    wordScore += score[c - 'a'];
                    --tempCount[c];
                } else {
                    return 0; // Word cannot be formed
                }
            }
            return wordScore;
        };
        
        // Generate all subsets of words
        int n = words.size();
        int maxScore = 0;
        for (int mask = 0; mask < (1 << n); ++mask) {
            string combinedWord = "";
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    combinedWord += words[i];
                }
            }
            maxScore = max(maxScore, calculateWordScore(combinedWord));
        }
        
        return maxScore;
    }
};