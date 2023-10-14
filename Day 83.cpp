// Question link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. You are given an array of strings sentences, where each 
// sentences[i] represents a single sentence. Return the maximum number of words that appear in a single sentence.

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int counter, ans=0;
        for(int i=0;i<n;i++)
        {
            int k=sentences[i].length();
            counter=1;
            for(int j=0;j<k;j++) if(sentences[i][j]==' ') counter++;
            ans=max(counter, ans);
        }
        return ans;
    }
};
