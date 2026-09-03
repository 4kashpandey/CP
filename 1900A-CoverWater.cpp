#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
     while( t--) {
        int n;
        cin>> n;
        string a;
        cin>> a;
        int cnt=0;
        int ans=0;
    
        for( int i=0;i<n;i++){
            if(a[i]=='.') cnt++;
            if(i<0&&i>n-1)continue;
            if(a[i]=='.' && a[i-1]=='.' && a[i+1]=='.'){ans=2; break; }                      
        }
        if(ans!=2)ans=cnt;
        cout << ans << "\n";
     }
    return 0;

}
