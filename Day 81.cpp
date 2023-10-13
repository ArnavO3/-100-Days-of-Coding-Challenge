// Question link: https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/solutions/4024658/c-java-simple-math-o-1-very-simple-to-understand/

// You are given four integers sx, sy, fx, fy, and a non-negative integer t. In an infinite 2D grid, you start at the cell (sx, sy). Each second, you must move to any of its adjacent cells.
// Return true if you can reach cell (fx, fy) after exactly t seconds, or false otherwise. A cell's adjacent cells are the 8 cells around it that share at least one corner with it. You can visit the same cell several 
// times.

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x = abs(sx-fx);
        int y = abs(sy-fy);
        if(x == 0 && y == 0) return t != 1;
        if(x<=t && y<=t) return true;
        return false; 
    }
};
