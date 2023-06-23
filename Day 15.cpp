// Question link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

//Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid 
//j's such that j != i and nums[j] < nums[i].
//Return the answer in an array.

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      
        //1st solution
  
        // vector <int> ans;
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     count=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]>nums[j]){
        //             count++;
        //         }
        //     }
        //     ans.push_back(count);
        // }
        // return ans;

        //2nd solution
        
        map <int, int> count;
        vector <int> ans = nums;
        int n = nums.size();
        sort(ans.begin(), ans.end());
        for(int i=n-1; i>=0; i--){
            count[ans[i]] = i;
        }
        for(int i=0; i<n; i++){
            nums[i] = count[nums[i]];
        }
        return nums;
    }
};
