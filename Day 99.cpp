// Question link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:
// [4,5,6,7,0,1,4] if it was rotated 4 times.
// [0,1,4,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
// Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(), l=0, h=n-1, ans=INT_MAX;
        while(l<h){
            int m=(l+h)/2;
            if(nums[m]<nums[h]) h=m;
            else if(nums[m]>nums[h]) l=m+1;
            else h--;
        }
        return nums[l];
    }
};
