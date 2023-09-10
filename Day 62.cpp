// Question link: https://leetcode.com/problems/reduce-array-size-to-the-half/description/

// You are given an integer array arr. You can choose a set of integers and remove all the occurrences of these integers in the array.
// Return the minimum size of the set so that at least half of the integers of the array are removed.

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int ans=n,count=0;
        priority_queue<int> pq;
        unordered_map<int,int> mp;
        for(auto x : arr) mp[x]++;
        for(auto x : mp) pq.push(x.second);
        while(ans > n/2){
            ans -= pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};
