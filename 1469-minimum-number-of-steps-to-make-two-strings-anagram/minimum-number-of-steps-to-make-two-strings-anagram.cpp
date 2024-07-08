class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mpp;
        int answer=0;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        auto it=mpp.begin();
        for(int i=0;i<t.size();i++){
            while(it!=mpp.end()){
                if(it->first==t[i]){
                    if(it->second >= 1){
                        it->second--;
                        break;
                    }
                    else{
                        answer++;
                        break;
                    }
                }
                
                else if(it->first > t[i]){
                    answer++;
                    break;
                }
                it++;
            }
            if(it==mpp.end()){
                answer++;
            }
            it=mpp.begin();
        }
        return answer;
    }
};