// Question link: https://leetcode.com/problems/relative-ranks/description/

//You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.
//The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. 
//The placement of each athlete determines their rank:
//The 1st place athlete's rank is "Gold Medal".
//The 2nd place athlete's rank is "Silver Medal".
//The 3rd place athlete's rank is "Bronze Medal".
//For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
//Return an array answer of size n where answer[i] is the rank of the ith athlete.

 class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n =score.size();
        vector<string>ans(n);
        map<int,int>mp;
        for(int i=0; i<n; i++) mp[score[i]] = i;
        priority_queue<int>pq(score.begin(), score.end());
        int cnt = 1;
        while(!pq.empty()){
            int mx = pq.top(); pq.pop();
            if(cnt == 1) ans[mp[mx]] = "Gold Medal";
            else if(cnt == 2) ans[mp[mx]] = "Silver Medal";
            else if(cnt == 3) ans[mp[mx]] = "Bronze Medal";
            else ans[mp[mx]] = to_string(cnt);
            cnt++;
        }
        return ans;
    }
};
