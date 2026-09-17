#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        long long tot=0;
        vector<int> arr (n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            tot+=arr[i];
        }
        
        
         sort(arr.begin(),arr.end());
         vector<long long> pref(n+1, 0);
         for(int i=0;i<n;i++){
             pref[i+1]=pref[i]+arr[i];
         }
         
         long long ans=-1e18;
         
       
         for(int k=0;k<=n;k++){
             long long cr=k;
             long long sr=(2*k<=n)?(pref[n]-pref[n-k]):pref[k];
             long long sb=tot-sr;
             long long cb=n-k;
             
             ans=max(ans,sb*cr + sr*cb );
         }
         
         cout<< ans<< endl;
    }
     return 0;

}