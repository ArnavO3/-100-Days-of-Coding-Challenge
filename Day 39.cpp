// Question link: https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/

//Merge the two arrays into one array that is sorted in ascending order by id, respecting the following conditions:
//Only ids that appear in at least one of the two arrays should be included in the resulting array.
//Each id should be included only once and its value should be the sum of the values of this id in the two arrays. If the id does not exist in one of the two arrays 
//then its value in that array is considered to be 0.
//Return the resulting array. The returned array must be sorted in ascending order by id.

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int> mp;
        for(auto i: nums1) mp[i[0]] += i[1];
        for(auto i: nums2) mp[i[0]] += i[1];

        vector<vector<int>> ans;

        for(auto i: mp){
            ans.push_back({i.first,i.second});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
