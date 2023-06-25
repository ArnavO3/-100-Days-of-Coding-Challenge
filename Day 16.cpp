// Question link: https://leetcode.com/problems/number-of-arithmetic-triplets/description/

//You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following 
//conditions are met:
//i < j < k,
//nums[j] - nums[i] == diff, and
//nums[k] - nums[j] == diff.
//Return the number of unique arithmetic triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int count = 0;
        
        unordered_map<int,bool> mp;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]] = true;
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]-diff] && mp[nums[i]+diff]) count++;
        }
        
        return count;
    }
};
