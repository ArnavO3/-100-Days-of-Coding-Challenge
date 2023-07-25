// Question link: https://leetcode.com/problems/powx-n/description/

//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long N = n;
        if(N < 0) N = -N;
        while(N>0){
            if(N%2==1){
                ans = ans * x;
                N--;
            }
            else{
                x = x*x;
                N/=2;
            }
        }
        if(n < 0){
            ans = 1.0/ans;
        }
        return ans;
    }
};
