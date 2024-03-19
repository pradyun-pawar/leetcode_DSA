class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return 0;
        int longest=1;
        int lastSmaller=INT_MIN;
        int current=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]-1==lastSmaller){
                current=current+1;
                lastSmaller=arr[i];
            }
            else if(arr[i]!=lastSmaller){
                current=1;
                lastSmaller=arr[i];
            }
            longest=max(longest,current);
        }
        return longest;
    }
};