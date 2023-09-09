// Question link: https://leetcode.com/problems/valid-mountain-array/submissions/

// Given an array of integers arr, return true if and only if it is a valid mountain array. Recall that arr is a mountain array if and only if:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool ans = true;
        if(arr.size() <= 2) return false;
        if(arr[0] >= arr[1]) return false;
        int flag = 0, id=-1;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i] < arr[i+1] && flag == 0) continue;
            if(arr[i] > arr[i+1] && flag == 0){ 
                flag = 1;
                id = i;
            }
            if(arr[i] < arr[i+1] && flag == 1) ans = false;
            if(arr[i] == arr[i+1]){
                ans = false;
                break;
            }
        }
        if (id == -1) ans = false;
        return ans;
    }
};
