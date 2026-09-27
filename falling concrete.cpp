#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        vector<int> diff(n);
        
        for(int i=0;i<n;i++){
            cin>> v[i];
            diff[i]=v[i]-i;
        }
        
        sort(diff.begin(),diff.end());
        int len=1,maxi=1;
        for(int i=0;i<n-1;i++){
            if(diff[i]==diff[i+1]-1)len++;
            else if(diff[i]==diff[i+1])continue;
            else len=1;
            maxi=max(maxi,len);
        }
        cout<< maxi<< endl;
    }
    return 0;
}