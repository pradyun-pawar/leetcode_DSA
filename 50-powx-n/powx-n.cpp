class Solution {
public:
    double myPow(double x, int n) {
        double ans=x;
        long long raised=n;
        double waitlist=1;

        if(raised<0){
            raised=raised*(-1);
        }
        if(raised==0) return 1;
        while(raised>1){
            if(raised%2==0){
                ans=ans*ans;
                raised=raised/2;
            }
            else{
                waitlist=waitlist*ans;
                raised=raised-1;
            }
        }
        ans=ans*waitlist;
        if(n<0){
            ans=1/ans;
        }
        return ans;
    }
};