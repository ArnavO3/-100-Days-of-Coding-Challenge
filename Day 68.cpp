// Question link: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

// Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in 
//decreasing order.

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(auto x : nums) mp[x]++;
        for(auto x : mp) pq.push({-x.second, x.first});
        nums.clear();
        while(!pq.empty()){
            for(int i=0; i<-pq.top().first; i++) nums.push_back(pq.top().second);
            pq.pop();
        }
        return nums;
    }
};
