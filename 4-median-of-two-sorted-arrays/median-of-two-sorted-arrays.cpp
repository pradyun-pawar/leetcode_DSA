class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        for(int i=0;i<nums1.size();i++){
            answer.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            answer.push_back(nums2[i]);
        }
        sort(answer.begin(),answer.end());
        int n=answer.size();
        if(n%2==0){
            double result=((double)answer[(n/2)-1]+(double)answer[(n/2)])/2;
            return result;
        }
        else{
            int result=answer[(n/2)+0.5];
            return result;
        }
        return -1;
    }
};