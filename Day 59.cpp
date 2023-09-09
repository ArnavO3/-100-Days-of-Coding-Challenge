// Question link: https://leetcode.com/problems/third-maximum-number/submissions/

// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        priority_queue<int> pq;
        for(auto x : s) pq.push(x);
        if(pq.size() < 3) return pq.top();
        for(int i=0; i<2; i++) pq.pop();
        return pq.top();
    }
};
