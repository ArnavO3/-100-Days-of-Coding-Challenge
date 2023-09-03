// Question link: https://www.codechef.com/problems/KDELI?tab=statement

//A new patisserie has opened up to rave reviews. You, in your quest for deliciousness, are going to visit it. The patisserie has N pastries. With your trained eye,
//you judge that the i-th of them has deliciousness Ai. Of course, you want to eat pastries whose total deliciousness is as high as possible. Unfortunately, you 
//can't just buy everything out. There are K customers in the store, including you. They form a queue to order pastries, of which you're the L-th person. Each 
//customer, including you, will do the following: 
//Among the remaining pastries, buy the one with the highest deliciousness
//Then, move to the back of the queue
//This will repeat till all the pastries are sold out.
//What's the total deliciousness of the pastries you buy?

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int l, k, n, ans=0;
	    cin>>n>>k>>l;
	    long long int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    sort(arr, arr+n, greater<int>());
	    for(int i=l-1; i<n; i+=k) ans += arr[i];
	    cout<<ans<<endl;
	}
	return 0;
}
