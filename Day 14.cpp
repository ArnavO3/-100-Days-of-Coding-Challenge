// Question link : https://leetcode.com/problems/search-insert-position/

//An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).
//Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        bool ans = true;
        int n = matrix.size();
        int sum = n*(n+1)/2;

        for(int i=0; i<n; i++){
            int colSum = 0, rowSum = 0;
            vector<int> temp = matrix[i];
            sort(temp.begin(), temp.end());
            for(int j=0; j<n-1; j++){
                if(temp[j] + 1 != temp[j+1]) ans = false;
            }
            for(int j=0; j<n; j++){
                if(matrix[i][j])
                colSum += matrix[j][i];
                rowSum += matrix[i][j];
            }
            if( colSum!=sum || rowSum!=sum ) ans = false;
        }
        return ans;
    }
};
