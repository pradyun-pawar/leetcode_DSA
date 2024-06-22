class Solution {
public:
    vector<int> minOperations(string boxes) {
        int val=0;
        int maxBalls=0;
        vector<int> boxers;
        vector<int> answer;

        for(int i=0;i<boxes.size();i++){
            val=boxes[i]-'0';
            if(val==1){
                maxBalls++;
            }
            boxers.push_back(val);
                
        }
        int restore=maxBalls;
        int result=0;
        for(int i=0;i<boxers.size();i++){
            int ans=boxers[i];
            // if(ans==1) maxBalls--;
            for(int j=0;j<boxers.size();j++){
                if(boxers[j]==1 && j!=i){
                    int m=j-i;
                    if(m<0){
                        m=-m;
                    }
                    result=result+(m);
                }
            }
            answer.push_back(result);
            result=0;
        }
        return answer;
    }
};