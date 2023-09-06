// Question link: https://leetcode.com/problems/maximum-units-on-a-truck/description/

//You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:
//numberOfBoxesi is the number of boxes of type i.
//numberOfUnitsPerBoxi is the number of units in each box of the type i.
//You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. You can choose any boxes to put on the truck as long 
//as the number of boxes does not exceed truckSize. Return the maximum total number of units that can be put on the truck.

class Solution {
public:
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int limit=0, totalUnits=0, leftBox=0;
        priority_queue<pair<int, int>> pq;
        for(auto v: boxTypes) {
            pq.push({v[1],v[0]});
        }
        while(!pq.empty() && limit<truckSize) {
            if((pq.top().second + limit) < truckSize) {
                limit += pq.top().second;
                totalUnits += pq.top().first*pq.top().second;
            }
            else {
                leftBox = truckSize - limit;
                totalUnits += pq.top().first*leftBox;
                limit += leftBox;
            }
            pq.pop();
        }
        return totalUnits;
    }};
