class Solution {
public:
    bool rotateString(string s, string goal) {
        string result=s;
        string ans="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            ans=s[i];
            result=ans+result;
            result.erase(n,1);
            if(result==goal){
                return true;
            }
        }
        return false;
    }
};