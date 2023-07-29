// Question link: https://www.codechef.com/problems/CFMM

//Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are N ingredients, represented by strings 1,2,…,S1,S2,…,SN. 
//Chef took all the ingredients, put them into a cauldron and mixed them up.
//In the cauldron, the letters of the strings representing the ingredients completely mixed, so each letter appears in the cauldron as many times as it appeared 
//in all the strings in total; now, any number of times, Chef can take one letter out of the cauldron (if this letter appears in the cauldron multiple times, it can 
//be taken out that many times) and use it in a meal. A complete meal is the string "codechef". Help Chef find the maximum number of complete meals he can make!

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, c=0, o=0, d=0, e=0, h=0, f=0;
	    string s="";
	    cin>>n;
	    string arr[n];
	    
	    for(int i=0; i<n; i++) cin>>arr[i];
	    
	    unordered_map<char,int> mp;
	    
	    for(auto i: arr){
	        s += i;
	    }
	    
	    int l = s.size();
	    
	    for(int i=0; i<l; i++){
	        if(s[i] == 'c'){
	            mp[s[i]]++; c++;
	        }
	        else if(s[i] == 'o'){
	            mp[s[i]]++; o++;
	        }
	        else if(s[i] == 'd'){
	            mp[s[i]]++; d++;
	        }
	        else if(s[i] == 'e'){
	            mp[s[i]]++; e++;
	        }
	        else if(s[i] == 'h'){
	            mp[s[i]]++; h++;
	        }
	        else if(s[i] == 'f'){
	            mp[s[i]]++; f++;
	        }
	        else continue;
	    }
	    
	    c /= 2; e /= 2;
	    int result = min(c, min (o, min(d, min(e, min(h, f)))));
	    cout<<result<<endl;
	    
	}
	return 0;
}
