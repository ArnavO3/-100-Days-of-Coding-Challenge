// Question link: https://leetcode.com/problems/sort-the-students-by-their-kth-score/description/

//There is a class with m students and n exams. You are given a 0-indexed m x n integer matrix score, where each row represents one student and score[i][j] denotes 
//the score the ith student got in the jth exam. The matrix score contains distinct integers only.
//You are also given an integer k. Sort the students (i.e., the rows of the matrix) by their scores in the kth (0-indexed) exam from the highest to the lowest.
//Return the matrix after sorting it.

class Solution {
	public:
		vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {

			map<int,vector<int>,greater<int>>mp;
			vector<vector<int>> ans;
			
			int m=s.size();

			for(int r=0;r<m;r++) mp[s[r][k]]=s[r];

			for(auto i:mp) ans.push_back(i.second);

			return ans;
		}
	};
