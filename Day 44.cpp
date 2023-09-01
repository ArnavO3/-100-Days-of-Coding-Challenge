// Question link: https://www.codechef.com/problems/LUCKYSTR?tab=statement

//A Little Elephant from the Zoo of Lviv likes lucky strings, i.e., the strings that consist only of the lucky digits 4 and 7. The Little Elephant has K favorite 
//lucky strings A1, A2, ..., AK. He thinks that the lucky string S is good if either |S| ≥ 47 or for some j from 1 to K we have that Aj is a substring of S.
//The Little Elephant has found N lucky strings B1, B2, ..., BN under the pillow. Now he wants to know which of them are good. Help him and find for each i from 1 to 
//N whether the string Bi is good or not.

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int k,n;
	cin>>k>>n;
	string a[k],b[n];
	for(int i=0;i<k;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++){
	int c=0;
	for(int j=0;j<k;j++){
	   if (b[i].find(a[j]) != string::npos) { 
	       cout<<"Good"<<endl;
	       c=1;
	       break;
	   }
	}
	if(c==0){
	    if(b[i].length()>=47) cout<<"Good"<<endl;
        else  cout<<"Bad"<<endl;
	   }
	}
	
	return 0;
}
