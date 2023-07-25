// Question link: https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

//An array arr a mountain if the following properties hold: arr.length >= 3
//There exists some i with 0 < i < arr.length - 1 such that:
//arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
//arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
//Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
//You must solve it in O(log(arr.length)) time complexity.

class Solution {
public:
    int peakIndexInMountainArray(vector<int> A) {
        for (int i = 1; i + 1 < A.size(); ++i) if (A[i] > A[i + 1]) return i;
        return -1;
    }
};

// int peakIndexInMountainArray(vector<int>& a) {
// 		int n = a.size();

// 		int start = 1, end = n-1;
// 		while(start<=end){
// 				int mid = start + (end-start)/2;
// 				if(a[mid] > a[mid-1] && a[mid] > a[mid+1]) return mid;
// 				else if(a[mid-1] > a[mid]) end = mid-1;
// 				else start = mid+1;
// 		}
// 		return -1;
// }
