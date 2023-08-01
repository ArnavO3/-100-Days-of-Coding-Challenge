// Question link: https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/

//Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between two points such that no points are inside the area.
//A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The widest vertical area is the one with the maximum width.

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
            ans = max(points[i+1][0]-points[i][0],ans);
        return ans;
    }
};
