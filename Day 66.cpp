// Question link: https://leetcode.com/problems/valid-palindrome/

//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include 
//letters and numbers. Given a string s, return true if it is a palindrome, or false otherwise.

class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(auto x : s){
            if(isalnum(x)) temp += tolower(x);
        }
        int low=0, high=temp.size()-1;
        while(low<high){
            if(temp[low] != temp[high]) return false;
            low++;high--;
        }
        return true;
    }
};
