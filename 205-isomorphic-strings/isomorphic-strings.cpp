class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            char d=t[i];
            for(int j=i+1;j<s.size();j++){
                if(s[j]==c && t[j]!=d){
                    return false;
                }
                if(t[j]==d && s[j]!=c){
                    return false;
                }
            }
        }
        return true;
    }
};