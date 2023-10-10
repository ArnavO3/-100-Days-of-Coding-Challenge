// Question link: https://leetcode.com/problems/majority-element-ii/?envType=daily-question&envId=2023-10-05

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector <int> ans;
        int n = nums.size();
        for(auto x : nums)m[x]++;
        for(auto x : m){
            if(x.second > n/3) ans.push_back(x.first);
        }
        return ans;
    }
};
