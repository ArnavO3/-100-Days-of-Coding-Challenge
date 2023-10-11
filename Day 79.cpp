// Question link: https://leetcode.com/problems/top-k-frequent-words/

// Given an array of strings words and an integer k, return the k most frequent strings. Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their 
//lexicographical order.

class Solution {
public:
    
    static bool comparator(pair<string,int> p1, pair<string,int> p2)
    {
        if(p1.second > p2.second || (p1.second == p2.second && p1.first < p2.first))
            return true;
        return false;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        vector<pair<string,int>> v;
        vector<string> ans;
        
        for(int i=0; i<words.size(); i++) m[words[i]]++;
        
        for(auto it=m.begin(); it!=m.end(); it++) v.push_back({it->first,it->second});
        
        sort(v.begin(), v.end(), comparator);
        
        for(int i=0; i<k; i++) ans.push_back(v[i].first);
        
        return ans;
    }
};
