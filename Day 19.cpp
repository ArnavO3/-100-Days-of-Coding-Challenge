// Question link: https://leetcode.com/problems/prime-in-diagonal/description/

//Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = true;
        string str = to_string(x);
        int i=0, j=str.size()-1;
        while(i<=j){
            if(str[i] != str[j]) ans=false;
            i++;
            j--;
        }
        return ans;
    }
};
