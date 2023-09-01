// Question link: https://leetcode.com/problems/arithmetic-subarrays/description/

//A sequence of numbers is called arithmetic if it consists of at least two elements, and the difference between every two consecutive elements is the same. More 
//formally, a sequence s is arithmetic if and only if s[i+1] - s[i] == s[1] - s[0] for all valid i.

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0; i<l.size(); i++) {
            vector<int> v;
            for(int j=l[i]; j<=r[i]; j++) {
                v.push_back(nums[j]);
            }
            sort(v.begin(), v.end());
            int d = v[1] - v[0];
            bool flag = true;
            for(int j=2; j<v.size(); j++) {
                if(v[j] - v[j-1] != d) {
                    flag = false;
                    break;
                }
            }
            ans.push_back(flag);
        }
        return ans;
    }
};
