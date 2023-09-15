// Question link: https://www.codechef.com/problems/S100?tab=statement

// You are given a binary string S of length N. You can apply the following operation any (possibly zero) number of times:
// Select an integer i (1≤i≤N−2) and replace the substring Si+1, Si+2 with 100.
// Find the lexicographically smallest string after the operations.

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int pos = 0;
        while(s[pos]!='1') pos++;
        for(int i = n-3; i>=pos; i--){ 
            s[i] = '1';
            s[i+1] = '0';
            s[i+2] = '0'; 
        }
        cout<<s<<endl;
    }
    return 0;
}
