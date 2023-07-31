// Question link: https://www.codechef.com/problems/MAKEMULTIPLE?tab=statement

//Chef can choose any non-negative integer X and add them to both A and B. Find whether it is possible to make A a divisor of B.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(b%a==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        if((b-a)>=a) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
