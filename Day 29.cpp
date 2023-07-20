// Question link: https://www.codechef.com/problems/CARDSWIPE?tab=statement

//In the bustling CodeChef office, the entrance is equipped with a high-tech card swipe system. Each employee is assigned a unique ID card that they use to swipe in 
//and out of the building.
//The system records every swipe, capturing the first swipe of an ID as in, second as out, third as in, and so on. Given an array A consisting of N IDs denoting N 
//swipes throughout the day, find the maximum number of people in the office at any time.
//Note that there is nobody inside the office before the first swipe.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int ans=0, mx=0;
	    cin>>n;
	    int a[n];
	    unordered_map<int,int> m;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        m[a[i]]++;
	        if(m[a[i]]%2==1){
	            mx++;
	        }
	        else{
	            mx--;
	        }
          ans = max(ans, mx);
	    }
	    cout<<ans<<endl;

	}
	return 0;
}
