// Question link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/

// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.
// In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
// Note that 0 is neither positive nor negative.

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size(), neg=0, pos=0, l=0, h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]<0){
                neg = m+1;
                l = m+1;
            }
            else h = m-1;
        }
        l = 0; h = n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]>0){
                pos = n-m;
                h = m-1;
            }
            else l = m+1;
        }
        int ans = max(neg, pos);
        return ans;
    }
};
