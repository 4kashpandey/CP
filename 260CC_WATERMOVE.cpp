#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>> t;
    
    while(t--){
        int n,k;
        cin>> n>> k;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>> v[i];
        
        sort(v.begin(),v.end());
        
        cout<< max(v[0]+v[1],v[n-1])<< endl;
        
    }
    return 0;
}
