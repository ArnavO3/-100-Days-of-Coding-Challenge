// Question link: https://leetcode.com/problems/delete-greatest-value-in-each-row/description/

//You are given an m x n matrix grid consisting of positive integers. Perform the following operation until grid becomes empty:
//Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
//Add the maximum of deleted elements to the answer.

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        
        for(auto &v:grid){
            sort(v.begin(), v.end());
        }
        sort(grid.begin(), grid.end());
        
        for(int j=n-1;j>=0;j--){
            int maxi=0;
            for(int i=m-1;i>=0;i--){
                maxi=max(maxi, grid[i][j]);
            }
            ans+=maxi;
        }
        return ans;
    }
};
