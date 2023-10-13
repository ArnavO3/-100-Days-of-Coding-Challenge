// Question link: https://leetcode.com/problems/find-the-maximum-divisibility-score/description/

// You are given two 0-indexed integer arrays nums and divisors. The divisibility score of divisors[i] is the number of indices j such that nums[j] is divisible by divisors[i].
// Return the integer divisors[i] with the maximum divisibility score. If there is more than one integer with the maximum score, return the minimum of them.

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxcount = 0;
        int best_divisor = divisors[0];
        for (int i = 0; i < divisors.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) count++;
            }
            
            if(count==maxcount) best_divisor = min(best_divisor,divisors[i]);
            else if (count > maxcount) {
                maxcount = count;
                best_divisor = divisors[i];
            }
        }
        return best_divisor;
    }
};

