// Question link: https://leetcode.com/problems/check-if-n-and-its-double-exist/

// Given an array arr of integers, check if there exist two indices i and j such that :
// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x : arr) mp[x]++;
        for(auto x : arr){
            if(mp.count(2*x) && (x!=0 || mp[x] > 1) ) return true;
        }
        return false;
    }
};
