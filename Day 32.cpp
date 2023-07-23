// Question link: https://leetcode.com/problems/majority-element/description/

//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
int majorityElement(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;
    int n = nums.size();
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[nums[i]]++;
        if(m[nums[i]] > n/2 ) return nums[i];
    }
    return 0;
}
};
