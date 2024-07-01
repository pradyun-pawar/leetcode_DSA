class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int first=arr[2];
        int second=arr[1];
        int third=arr[0];

        if(first%2!=0 && second%2!=0 && third%2!=0){
            return true;
        }
        for(int i=3; i<arr.size(); i++){
            third=second;
            second=first;
            first=arr[i];
            if(first%2!=0 && second%2!=0 && third%2!=0){
                return true;
            }
        }
        return false;
    }
};