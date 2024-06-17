class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string result="";

        if(s.size()==0) return result;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c==' ' && ans!=""){
                result.insert(0,ans);
                result.insert(0," ");
                ans="";
                continue;
            }
            else if(c==' ' && ans==""){
                continue;
            }
            ans=ans+c;
        }
        result.insert(0,ans);
        if(result[0]==' '){
            result.erase(0,1);
        }
        return result;
    }
};