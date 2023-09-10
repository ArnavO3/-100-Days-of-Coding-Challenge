// Question link: https://www.hackerrank.com/challenges/jesse-and-cookies/problem?isFullScreen=true

// Jesse loves cookies and wants the sweetness of some cookies to be greater than value . To do this, two cookies with the least sweetness are repeatedly mixed. This 
// creates a special combined cookie with:
// sweetness 1x Least sweet cookie + 2* 2nd least sweet cookie).
// This occurs until all the cookies have a sweetness >= k .
// Given the sweetness of a number of cookies, determine the minimum number of operations required. If it is not possible, return -1.

int cookies(int k, vector<int> A) {
    long long int ans=0;
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq(A.begin(), A.end());
    while(pq.top() < k){
        if(pq.empty()) return -1;
        int a = pq.top();
        pq.pop();
        if(pq.empty()) return -1;
        int b = pq.top();
        pq.pop();
        pq.push(a+2*b);
        ans++;
    }
    return ans;
}
