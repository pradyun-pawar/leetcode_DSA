class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            num1.push_back(nums2[i]);
        }
        sort(num1.begin(),num1.end());
        int n=num1.size();
        if(n%2==0){
            double result=((double)num1[(n/2)-1]+(double)num1[(n/2)])/2;
            return result;
        }
        else{
            int result=num1[(n/2)+0.5];
            return result;
        }
        return -1;
    }
};