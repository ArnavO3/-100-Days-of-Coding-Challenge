// Question link: https://www.codechef.com/problems/MIX2

//The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of two lines of input. The first line of 
//each test case contains a single integer N — the number of types of juice with Chef. The second line contains N space-separated integers 1,2,…,A1,A2,…,AN — 
//the quantity of the i-th drink. 
// Output Format
// For each test case, output on a new line the answer: the number of different mixes Chef can create.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n, arrSum = 0, eleSum = 0;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        arrSum += arr[i];
	        eleSum += arr[i]*arr[i];
	    }
	    long long int sum = arrSum * arrSum;
	    cout << (sum - eleSum)/2 << endl;
	}
	return 0;
}
