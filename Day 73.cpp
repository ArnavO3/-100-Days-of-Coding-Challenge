// Question link: https://leetcode.com/problems/number-of-different-integers-in-a-string/

// You are given a string word that consists of digits and lowercase English letters. You will replace every non-digit character with a space. For example, 
// "a123bc34d8ef34" will become " 123  34 8  34". Notice that you are left with some integers that are separated by at least one space: "123", "34", "8", and "34".
// Return the number of different integers after performing the replacement operations on word. Two integers are considered different if their decimal representations 
// without any leading zeros are different.

	class Solution {
	public:
		int numDifferentIntegers(string word) {
		set<string>s;
		for(int i=0;i<word.size();i++)
		{
			if(isdigit(word[i])==true)
			{
			 string ans="";
				while (word[i] == '0')i++;
				while(isdigit(word[i])==true)
				{
                    ans+=word[i];
                    i++;
				}
				s.insert(ans);
			}

		}
		return s.size();
        }
	};
