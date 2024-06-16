class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        priority_queue<pair<int,char>> st;
        int maxi=0; 

        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        string ans="";
        for(auto it:mpp){
            st.push({it.second,it.first});
        }
        while(!st.empty()){
            int a=st.top().first;
            char b=st.top().second;
            for(int i=0;i<a;i++){
                ans+=b;
            }
            st.pop();
        }
        return ans;        
    }
};