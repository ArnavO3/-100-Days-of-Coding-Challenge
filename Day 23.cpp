// Question link: https://leetcode.com/problems/unique-morse-code-words/description/

//International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:
//'a' maps to ".-",
//'b' maps to "-...",
//'c' maps to "-.-.", and so on.
//For convenience, the full table for the 26 letters of the English alphabet is given below:
//[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
//Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

  class Solution {
  public:


  int uniqueMorseRepresentations(vector<string>& words) 
  {
  	    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....", "..",".---","-.-",".-..", "--","-.","---",".--.", "--.-",".-.","...","-","..-",
        "...-",".--","-..-","-.--","--.."};

  	    unordered_set<string> set;

  	    for (auto word : words) {
  		    string t;
  		    for (auto c : word) t += morse[c - 'a'];
  		    set.insert (t);
  	    }

        return set.size();
    }
};
