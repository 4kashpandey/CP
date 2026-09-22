#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   int t;
   cin>> t; 
   while(t--){
    int n, k;
    cin>> n>> k;
    vector<long long > arr(n*k);
    for( int i=0;i<n*k ;i++){
        cin >> arr[i];
    }
    int gap=n/2;
    long long ans=0;
    long long  i=(n*k);
    while(k!=0){
        i=i-gap-1;
        ans+=arr[i];
        k--;
    }

    cout<< ans << endl;
   }
    return 0;
}