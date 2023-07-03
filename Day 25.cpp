// Question link: https://leetcode.com/problems/count-the-number-of-consistent-strings/

//You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear0
//in the string allowed.
//Return the number of consistent strings in the array words.

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = words.size();
        bool used[26] = {false};
        for( auto c : allowed) used[c - 97] = true;
        for( auto word : words){
            for( auto letter : word){
                if(!used[letter - 97]) {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};
