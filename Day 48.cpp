// Question link: https://leetcode.com/problems/sort-integers-by-the-power-value/description/

//The power of an integer x is defined as the number of steps needed to transform x into 1 using the following steps:
//if x is even then x = x / 2
//if x is odd then x = 3 * x + 1
//Given three integers lo, hi and k. The task is to sort all integers in the interval [lo, hi] by the power value in ascending order, if two or more integers have the
//same power value sort them by ascending order.

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=lo; i<=hi; i++)
        {
            int x=i;
            int count=0;
            while(x!=1)
            {
                if(x%2==0) x=x/2;
                else x=3*x+1;
                count++;
            }
            pq.push(make_pair(count,i));
        }
        int g=pq.size()-k, i=0;
        while(pq.size() && i<g)
        {
            pq.pop();
            i++;
        } 
        return pq.top().second;
    }
};
