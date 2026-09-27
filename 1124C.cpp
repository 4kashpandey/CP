#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>> n>> k;
        vector<int> v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>> v[i];
            if(i>=k-1 && i<=n-k)sum+=v[i];
        }
        long long s=0;
        if(n>=k*2-2){
        for(int i=0;i<k-1;i++){
            s+=max(v[i],v[n-1-i]);
         }
        }else{
            for(int i=0;i<=n-k;i++){
            s+=max(v[i],v[n-1-i]);
         }
        }
        cout<<sum+s<< endl;
    }
    return 0;
}