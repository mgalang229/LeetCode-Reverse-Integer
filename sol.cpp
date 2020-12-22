class Solution {
public:
    int reverse(int x) {
        long int rem=0, d=0;
        //use this algorithm to separate and reverse the digits from a number
        while(x!=0) {
            rem=x%10;
            d=d*10+rem;
            x/=10;
        }
        //check if 'd' exceeds 2^31 or below -2^31
        if(d<-1*pow(2, 31)||d>pow(2, 31))
            return 0;
        return d;
    }
};
