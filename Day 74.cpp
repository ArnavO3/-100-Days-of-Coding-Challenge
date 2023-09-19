// Question link: https://leetcode.com/problems/find-the-duplicate-number/submissions/1053451612/?envType=daily-question&envId=2023-09-19

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. There is only one repeated number in nums, return 
// this repeated number. You must solve the problem without modifying the array nums and uses only constant extra space.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums) mp[x]++;
        for(auto x : mp) if(x.second > 1) return x.first;
        return 0;
    }
};
