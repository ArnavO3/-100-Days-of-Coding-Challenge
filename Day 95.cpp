// Question link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

// GA conveyor belt has packages that must be shipped from one port to another within days days.
// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights).
// We may not load more weight than the maximum weight capacity of the ship. Return the least weight capacity of the ship that will result in all the packages on 
// the conveyor belt being shipped within days days.

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size(), l=*max_element(weights.begin(), weights.end()), h=accumulate(weights.begin(), weights.end(),0);
        while(l<=h){
            int m=l+(h-l)/2;
            int c=1, w=0;
            for(int i=0; i<n; i++){
                if(w+weights[i]<=m) w+=weights[i];
                else{
                    c++;
                    w=weights[i];
                }
            }
            if(c<=days) h=m-1;
            else l=m+1;
        }   
        return l;
    }
};
