#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--){
        int n,k;
        cin>> n>> k;
        
        if(n==1 && k==0) cout<<"No"<< endl;
        else if(k==n) cout<< "Yes" << endl;
        else if(k==n-1) cout<<"No"<< endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}