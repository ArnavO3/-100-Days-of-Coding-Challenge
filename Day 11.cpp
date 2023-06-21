// Question link : https://leetcode.com/problems/search-insert-position/

//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target) {
                return i;
            }
            else if(target>nums[nums.size()-1]){
                return nums.size();
            }
        }
        return 0;
    }
};
