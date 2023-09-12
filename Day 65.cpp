// Question link: https://leetcode.com/problems/k-closest-points-to-origin/description/

//Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
// The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2). You may return the answer in any order. The answer is 
// guaranteed to be unique (except for the order that it is in).

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> pq;
        vector<vector<int>> ans;
        for(auto x: points){
            vector <int> temp = {x[0]*x[0] + x[1]*x[1], x[0], x[1]};
            pq.push(temp);
            if(pq.size() > k) pq.pop();
        }
        for(int i=0; i<k; i++){
            vector <int> v = pq.top();
            ans.push_back({v[1], v[2]});
            pq.pop();
        }
        return ans;
    }
};
