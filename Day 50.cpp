// Question link: https://leetcode.com/problems/length-of-last-word/description/

//Given a string s consisting of words and spaces, return the length of the last word in the string.
//A word is a maximal substring consisting of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count=0, flag=0;
        for(int i=n-1; i>=0; i--){
            if(s[i] == ' ' && flag == 0) continue;
            else if(s[i] == ' ' && flag == 1) break;
            else{
                count++;
                flag = 1;
            }
        }
        return count;
    }
};
