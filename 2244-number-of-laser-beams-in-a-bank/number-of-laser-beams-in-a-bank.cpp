class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        string beams="";
        int number=0;
        int numberCurr=0;
        int total=0;

        for(int i=0;i<bank.size();i++){
            beams=bank[i];
            for(int j=0;j<beams.size();j++){
                int find=beams[j]-'0';
                if(find==1){
                    number++;
                }
            }
            if(number!=0){
                total=total+(number*numberCurr);
                numberCurr=number;
            }
            number=0;
        }
        return total;
    }
};