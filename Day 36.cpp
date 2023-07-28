// Question link: https://leetcode.com/problems/k-radius-subarray-averages/submissions/

//You are given a 0-indexed array nums of n integers, and an integer k.
//The k-radius average for a subarray of nums centered at some index i with the radius k is the average of all elements in nums between the indices i - k and i + k 
//(inclusive). If there are less than k elements before or after the index i, then the k-radius average is -1.
//Build and return an array avgs of length n where avgs[i] is the k-radius average for the subarray centered at index i.

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long int> sum(n);
        sum[0] = nums[0];
        for(int i=1 ; i<n ; ++i) {
            sum[i] = sum[i-1] + nums[i];
        }

        vector<int> ans(n,-1);
        int l = 2*k + 1;
        for(int i = k ; i<n-k ; ++i) {
           ans[i] = (sum[i+k] - (i-k > 0 ? sum[i-k-1] : 0))/ l;
        }

        return ans;
    }
};
