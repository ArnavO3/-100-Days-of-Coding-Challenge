// Question link : https://leetcode.com/problems/divide-two-integers/

//Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.
//The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.
//Return the quotient after dividing dividend by divisor.

class Solution {
public:
    int divide(int dividend, int divisor) {
        long long newDividend = abs(dividend);
        long long newDivisor = abs(divisor);
        int count=0;

        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        if(divisor==1) return dividend;
        if(divisor==-1) return -dividend;

        while(newDividend >= newDivisor){
            newDividend -= newDivisor;
            count++;
        }
        if( (divisor<0 && dividend>0) || (divisor>0 && dividend<0) ) return (-count);
        return count;

    }
};
