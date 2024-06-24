class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        queue<char> que;
        unordered_map<char,int> mpp;
        int answer=0;

        if (s.size()==0) return 0;
        for(int i=0;i<s.size();i++){
            que.push(s[i]);
            mpp[s[i]]++;
            while(mpp[s[i]]>1){
                char r = que.front();
                que.pop();
                mpp[r]--;
            }
            answer = max(answer, static_cast<int>(que.size()));

        }
        return answer;
    }
};