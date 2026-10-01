#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>> t;
    while(t--){
        long long n;
        cin>> n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>> v[i];
        }
        
        unordered_map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            mp[v[i]-i]++;
        }
        long long ans=0;
        for(auto &it: mp){
            if(it.second>1){
                ans+=(long long)(it.second*(it.second-1)/2);
            }
        }
        cout<< ans << endl;
    }
    return 0;
}
