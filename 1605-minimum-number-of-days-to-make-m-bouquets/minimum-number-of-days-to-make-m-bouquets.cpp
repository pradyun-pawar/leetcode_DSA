class Solution {
public:
    int bloomers(vector<int>&arr,int mid,int m,int k){
        int flower=0;
        int answer=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]-mid<=0){
                flower++;
                if(flower==k){
                    flower=0;
                    answer++;
                }
            }
            else{
                flower=0;
            }
        }
        return answer;

    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        long long int space=(long long int)m*(long long int)k;
        if(n<space) return -1;
        int maxi=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        int high=maxi;
        int cases=-1;
        int low=mini;
        while(high>=low){
            int mid=(high+low)/2;
            int result=bloomers(arr,mid,m,k);
            if(result>=m){
                cases=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return cases;
    }
};