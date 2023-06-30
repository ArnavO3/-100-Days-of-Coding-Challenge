// Question link: https://www.codechef.com/problems/REMOVEMUL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n, m;
	    long long int ans=0;
	    cin>>n>>m;
	    long long int sum1=0, sum2 = n*(n+1)/2;
	    long long int b[m];
	    
	    for(int i=0; i<m; i++){
	        cin>>b[i];
	        sum1 += b[i];
	    }
	    
	    cout << sum2 - sum1 << endl;

	}
	return 0;
}
