// Question link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

//A pangram is a sentence where every letter of the English alphabet appears at least once.
//Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool hash_map[26] = {false};
        for(int i=0; i<sentence.length(); i++){
            hash_map[(sentence[i] - 97)] = true;
        }
        for(int i=0; i<26; i++){
            if(!hash_map[i]) return false;
        }
        return true;
    }
};
