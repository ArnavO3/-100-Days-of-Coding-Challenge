// Question link: https://leetcode.com/problems/power-of-four/description/?envType=daily-question&envId=2023-10-23

// Given an integer n, return true if it is a power of four. Otherwise, return false. An integer n is a power of four, if there exists an integer x such that n == 4x.

class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int i = 0; i <= 15; i++) {
            int powerOfFour = pow(4, i);
            if (powerOfFour == n) return true;
            else if (powerOfFour > n) return false;
            else continue;
        }
        return false;
    }
};
