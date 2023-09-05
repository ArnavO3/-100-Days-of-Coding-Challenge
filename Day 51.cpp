// Question link: https://leetcode.com/problems/smallest-number-in-infinite-set/description/

//You have a set which contains all positive integers [1, 2, 3, 4, 5, ...]. Implement the SmallestInfiniteSet class:
//SmallestInfiniteSet() Initializes the SmallestInfiniteSet object to contain all positive integers.
//int popSmallest() Removes and returns the smallest integer contained in the infinite set.
//void addBack(int num) Adds a positive integer num back into the infinite set, if it is not already in the infinite set.

class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int, int> s;
    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i++)
        {
            pq.push(i);
            s[i]++;
        }
    }
    
    int popSmallest() {
        if(pq.size())
        {
            int x = pq.top();            
            s[x]--;
            pq.pop();
            return x;
        }  
        return -1;    
    }
    
    void addBack(int num) {
        if(s[num] == 0)
        {
            s[num]++;
            pq.push(num);
        }
    }
};
