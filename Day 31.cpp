// Question link: https://leetcode.com/problems/single-number-ii/description/

//Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
//You must implement a solution with a linear runtime complexity and use only constant extra space.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(m[nums[i]] != 3) ans = nums[i];
        }
        return ans;
    }
};
