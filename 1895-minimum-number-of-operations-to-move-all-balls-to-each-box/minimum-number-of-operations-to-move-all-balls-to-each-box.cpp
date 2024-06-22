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
                boxers.push_back(i);
            }        
        }

        int restore=maxBalls;
        int result=0;
        int k=0;
        for(int i=0;i<boxes.size();i++){
            while(maxBalls!=0){
                int m=boxers[k]-i;
                if (m<0){
                    m=-m;
                }
                result=result+m;
                maxBalls--;
                k++;
            }
            maxBalls=restore;
            k=0;
            answer.push_back(result);
            result=0;
        }
        return answer;
    }
};