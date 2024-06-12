class Solution {
public:
    string reverseWords(string s) {
        string answer="";
        s=s+" ";
        stack<string> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(answer!=""){
                    st.push(answer);
                }
                answer="";
            }
            else{
                answer=answer+s[i];
            }
        }
        answer.clear();
        while(!st.empty()){
            answer=answer+st.top();
            if(st.size()!=1){
                answer=answer+" ";
            }
            st.pop();
        }
        return answer;
    }
};