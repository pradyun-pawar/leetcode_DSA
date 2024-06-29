class Solution {
public:
    int countGoodNumbers(long long n) {
        long long MOD = 1000000007;
        long long good = 5;
        long long next = 4;
        long long ans = 1;
        if (n == 0) return 0;
        if (n == 1) return 5;
        
        long long part1 = n / 2;
        while(part1){
            if(part1%2==0){
                good=good * good % MOD;
                next=next * next % MOD;
                part1=part1 / 2;
            }
            else{
                ans=ans * good % MOD;
                ans=ans * next % MOD;
                part1=part1 - 1;
            }
        }
        if(n%2!=0){
            ans=(ans *5)% MOD;
        }
                
        return static_cast<int>(ans);
    }
};
