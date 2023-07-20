// Question link: https://www.codechef.com/problems/ONEFROMK?tab=statement

//For a fixed parameter K (1≤K≤N), consider the following process: You have a score, initially equal to 0.
//There is a bucket, initially containing the elements 1,2,…,AK−1. For each i from K to N: Insert Ai into the bucket. Then, choose one element from the bucket, add 
//it to your score, and remove it from the bucket. You'd like to maximize your score. For each K=1,2,3,…,N, find the maximum possible score you can attain if you 
//perform this process optimally with the parameter K.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    long long int sum=0;
	    for(long long int i=0; i<n; i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    sort(arr, arr+n);
	    for(long long int i=0; i<n; i++){
	        cout<<sum<<" ";
	        sum -= arr[i];
	   }
	    cout<<endl;
	}
    return 0;
}
