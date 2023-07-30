// Question link: https://leetcode.com/problems/intersection-of-two-arrays/description/

//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto i : nums1) m[i]=1;

        for(auto i : nums2)
        {
            if(m[i]==1)
            {
                m[i]++;
                ans.push_back(i);
            }
        }
        return ans;
    }
};
