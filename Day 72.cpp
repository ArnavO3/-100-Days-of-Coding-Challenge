// Question link: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/?envType=daily-question&envId=2023-09-18

// You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all 
// the 0's in each row. A row i is weaker than a row j if one of the following is true:
// The number of soldiers in row i is less than the number of soldiers in row j.
// Both rows have the same number of soldiers and i < j.
// Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> result;
        vector<pair<int,int>> rows(mat.size()); 

        for (int i = 0; i < mat.size(); i++) {
            rows[i] = make_pair(accumulate(mat[i].begin(), mat[i].end(), 0), i);
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq(rows.begin(), rows.end());

        while (!pq.empty() && k > 0) {
            result.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return result;
    }
};
