// Question link: https://leetcode.com/problems/search-a-2d-matrix/description/

// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ind=0;
        if(matrix.size()==1){
            for(int i=0; i<matrix[0].size(); i++){
                if(matrix[0][i] == target) return true;
            }
        }
        else{
            for(int m=0; m<matrix.size(); m++){
                if(matrix[m][0] < target){
                    ind=m;
                }
                else if(matrix[m][0] == target) return true;
                else break;
            }
            for(int i=0; i<matrix[ind].size(); i++){
                if(matrix[ind][i] == target) return true;
            }
        }
        return false;
    }
};
