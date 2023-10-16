// Question link: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/description/

// You are given two positive integer arrays nums and numsDivide. You can delete any number of elements from nums. Return the minimum number of deletions such that 
// the smallest element in nums divides all the elements of numsDivide. If this is not possible, return -1. Note that an integer x divides y if y % x == 0.

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        priority_queue<int, vector<int>, greater<int>> divisor(nums.begin(), nums.end());
        int ans=0, gcd=0;

        for(auto x : numsDivide) gcd = __gcd(gcd, x);

        while(!divisor.empty() && gcd%divisor.top()){
            ans++;
            divisor.pop();
        }

        if(divisor.empty()) return -1;
        return ans;
    }
};
