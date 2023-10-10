// Question link: https://www.codechef.com/problems/LPC?tab=statement

// Chef bought a new digital lock, but is quite suspicious of its actual strength in keeping out pesky thieves. So, he wants to find out how quickly he can open the lock. The digital lock works as follows:
// On its screen, there is a string of digits S of length N. There is also a secret code K of length M (1≤M≤10), which acts as the key to the lock. The lock will open if K is present anywhere in S as a contiguous 
// substring. Operating the lock is simple: Chef can choose an index i, and either increment Si by 1, or decrement it by 1. Here, the digits are cyclic, following the order 0→1→2→3→…→8→9→0→… You are given S and 
// K. What's the minimum number of moves Chef needs to open the lock?

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string s,k;
        cin>>s>>k;
        int res=INT_MAX;
        for (int i=0;i<=n-m;i++) {
            int c=0;
            for (int j=0;j<m;j++) {
                int d=abs((int)s[i+j]-(int)k[j]);
                c+=min(d,10-d);
            }
            res=min(res,c);
        }
        cout<<res<<endl;
    }
    return 0;
}
