// Question link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. 
// Find the smallest divisor such that the result mentioned above is less than or equal to threshold. Each result of the division is rounded to the nearest integer 
// greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5). The test cases are generated so that there will be an answer.

class Solution {
public:

    int sum(vector<int>& nums, int d){
        int s=0;
        for(int i=0; i<nums.size(); i++) s += ceil((double)nums[i]/(double)d);
        return s;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1, h=*max_element(nums.begin(), nums.end());
        while(l<=h){
            int m = (l+h)/2;
            int val = sum(nums, m);
            if(val<=threshold) h=m-1;
            else l=m+1;
        }
        return l;
    }
};
