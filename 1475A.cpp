#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
int main() 
{
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>> n;
        if(n > 0 && (n & (n - 1)) == 0) cout<< "NO"<< "\n";
        else cout<< "YES"<< endl;
    }
    return 0;
}