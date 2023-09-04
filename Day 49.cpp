// Question link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

//Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq (nums.begin(), nums.end());
        int t1 = pq.top();
        pq.pop();
        int t2 = pq.top();
        return (t1-1)*(t2-1);
    }
};
