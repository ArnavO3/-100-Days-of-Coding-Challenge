// Question link: https://leetcode.com/problems/build-array-from-permutation/description/

//Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
//A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> ans;
        for(int i=0; i<nums.size(); i++){
            int x = nums[nums[i]];
            ans.push_back(x);
        }
        return ans;
    }
};
