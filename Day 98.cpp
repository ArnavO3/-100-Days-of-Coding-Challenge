// Question link: https://leetcode.com/problems/container-with-most-water/description/

//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN, area, n=height.size(), l=0, r=n-1;
        while(l<r){
            area = min(height[l], height[r])*(r-l);
            ans = max(ans, area);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return ans;
    }
};
