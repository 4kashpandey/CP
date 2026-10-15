#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        long long n;
        cin>> n;
        long long ans=0;
        for(long long i=2;i<=n;){
            long long j=n/(n/i); // very very very important , to calculate the block range of i -j , with same n/i at once , sqrt TC.
            ans+=(j-i+1)*(n/i);
            i=j+1;
        }
        cout<< ans << endl;
    }
    return 0;
}
