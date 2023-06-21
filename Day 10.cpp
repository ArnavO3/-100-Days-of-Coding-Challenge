// Question link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
//If target is not found in the array, return [-1, -1].
//You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count=0;
        int j=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                count++;
                j = i;
            }
        }

        if(count==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(j-count+1);
            ans.push_back(j);
        }

        return ans;
    }
};
