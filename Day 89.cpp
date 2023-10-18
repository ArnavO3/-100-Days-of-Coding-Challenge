// Question link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/

// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
// Return the single element that appears only once. Your solution must run in O(log n) time and O(1) space.

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), l=1, h=n-2;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-2]!=nums[n-1]) return nums[n-1];
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]) return nums[m];
            else if(nums[m]==nums[m-1]){
                if(m%2!=0) l=m+1;
                else h=m-1;
            }
            else{
                if(m%2!=0) h=m-1;
                else l=m+1;
            }
        }
        return -1;
    }
};
