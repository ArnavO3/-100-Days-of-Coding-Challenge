// Question link: https://leetcode.com/problems/prime-in-diagonal/description/

//You are given a 0-indexed two-dimensional integer array nums.
//Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.
//Note that:
//An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
//An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.

class Solution {
public:
    bool isprime(int n){
        bool is_prime=true;
          if(n==0||n==1){
            is_prime=false;
          }
          for(int i=2;i<=n/2;++i){
            if(n%i==0){
              is_prime=false;
              break;
            }
          }
        return is_prime;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i][i]>maxi && isprime(nums[i][i]))
                maxi=nums[i][i];
            if(nums[i][n-i-1]>maxi && isprime(nums[i][n-i-1]))
                maxi=nums[i][n-i-1];
        }
        return maxi;
    }
};
