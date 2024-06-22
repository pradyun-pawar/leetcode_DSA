class Solution {
public:
    vector<int> minOperations(string boxes) {
        int val=0;
        int maxBalls=0;
        vector<int> boxers;
        vector<int> answer;
        int result=0;

        for(int i=0;i<boxes.size();i++){    
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]-'0'==1 && j!=i){
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