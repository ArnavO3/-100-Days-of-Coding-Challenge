// Question link: https://www.codechef.com/problems/TRANCHAIN

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a=0, b=0, ab=0, o=0, ans=0;
        cin>>n;
        string arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == "A") a++;
            else if(arr[i] == "B") b++;
            else if(arr[i] == "AB") ab++;
            else if(arr[i] == "O") o++;
        }
        ans += o + ab;
        cout << ( (a>=b)? ans+a : ans+b ) << endl;
    }
}
