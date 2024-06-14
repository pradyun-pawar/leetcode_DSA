class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s1=strs[0];
        string s2="";
        int j=0;

        for(int i=1;i<strs.size();i++){
            string ans=strs[i];
            while(j<s1.size() && j<ans.size()){
                if(s1[j]==ans[j]){
                    s2=s2+s1[j];
                }
                else{
                    break;
                }
                j++;
            }
            j=0;
            s1=s2;
            s2="";
        }
        return s1;
    }
};