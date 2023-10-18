// Question link: https://leetcode.com/problems/find-peak-element/

// A peak element is an element that is strictly greater than its neighbors. Given a 0-indexed integer array nums, find a peak element, and return its index. If the 
// array contains multiple peaks, return the index to any of the peaks. You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered 
// to be strictly greater than a neighbor that is outside the array. You must write an algorithm that runs in O(log n) time.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(), l=1, h=n-2;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]>nums[m+1] && nums[m]>nums[m-1]) return m;
            else if(nums[m]>nums[m-1]) l=m+1;
            else h=m-1;
        }
        return -1;
    }
};
