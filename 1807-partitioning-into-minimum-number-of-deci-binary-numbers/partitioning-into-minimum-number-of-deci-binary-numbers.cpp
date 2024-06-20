class Solution {
public:
    int minPartitions(string n) {
        int res=0;
        int maxi=0;

        for(int i=0;i<n.size();i++){
            char c=n[i];
            res=c-'0';
            if(res==9) return res;
            maxi=max(maxi,res);
        }
        return maxi;
    }
};