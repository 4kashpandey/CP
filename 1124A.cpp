#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    
    while(t--){
        int n,k;
        cin>> n>> k;

        long long ans;
        ans=pow(2,n-k+1);
        ans+=(2*(k-1));
        cout<< ans << endl;
    }
    return 0;
}