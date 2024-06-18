class Solution {
public:
    int scoreOfString(string s) {
        int j=0;
        int i=1;
        int sum=0;
        int result=0;

        while(i<s.size()){
            sum=(s[i]-'0')-(s[j]-'0');
            if(sum<0){
                sum=-sum;
            }
            result=result+sum;
            sum=0;
            i++;
            j++;
        }
        return result;
    }
};