// Question link: https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/

//You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.Return a list answer 
// of size 2 where:
// answer[0] is a list of all players that have not lost any matches.
// answer[1] is a list of all players that have lost exactly one match.
// The values in the two lists should be returned in increasing order.

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<matches.size();i++)
        {
            mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        vector<vector<int>>ans;
        vector<int>temp1;
        for(auto it: mp1)
        {
            if(mp2.find(it.first)==mp2.end()) 
            {
                temp1.push_back(it.first);
            }
        }
        ans.push_back(temp1);
        vector<int>temp2;
        for(auto it: mp2)
        {
            if(it.second==1)
            {
                temp2.push_back(it.first);
            }
        }
        ans.push_back(temp2);
        return ans;
    }
};
