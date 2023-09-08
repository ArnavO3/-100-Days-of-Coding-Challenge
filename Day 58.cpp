// Question link: https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/description/

// You are given an integer array deck where deck[i] represents the number written on the ith card. Partition the cards into one or more groups such that:
// Each group has exactly x cards where x > 1, and
// All the cards in one group have the same integer written on them.
// Return true if such partition is possible, or false otherwise.

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int>mp;
        for(auto i : deck) mp[i]++;
        int gcd_val = mp.begin()->second;
        for(auto it : mp) gcd_val = __gcd(gcd_val, it.second);
        return gcd_val != 1;
    }
};
