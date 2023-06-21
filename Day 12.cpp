// Question link : https://leetcode.com/problems/plus-one/

//You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
//Increment the large integer by one and return the resulting array of digits.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size() - 1;
      
      for (int i = n; i >= 0; --i) {
        if (digits[i] == 9) {  
          digits[i] = 0;
        } else { 
          digits[i] += 1;
          return digits;
        }
      }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};
