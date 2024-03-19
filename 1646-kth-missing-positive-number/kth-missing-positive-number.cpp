class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0;
        int number=1;
        int missing=0;
        int track=0;
        while(missing<=k){
            if(i<n && arr[i]==number){
                i++;
            }
            else{
                track=number;
                missing++;
            }
            number++;
            if(missing==k){
                return track;
            }
        }
        return -1;
    }
};