// Question link: https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/

// A string s is called good if there are no two different characters in s that have the same frequency. Given a string s, return the minimum number of characters you need to delete to make s good.
// The frequency of a character in a string is the number of times it appears in the string. For example, in the string "aab", the frequency of 'a' is 2, while the frequency of 'b' is 1.

class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        unordered_map<char,int> mp;
        vector <int> freq;
        for(auto c : s) mp[c]++;
        for(auto x : mp){
            int f = x.second;
            while(f>0 && find(freq.begin(), freq.end(), f)!=freq.end()){
                f--;
                ans++;
            }
            freq.push_back(f);
        }
        return ans;
    }
};
