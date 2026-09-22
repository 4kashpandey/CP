#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   long long  t;
   cin>> t;
   while(t--){
    long long  n , x;
    cin>> n>> x;

    vector<long long > v(n);
    long long sum=0;
    long long  maxi=0;
    long long  mini=0;
    for(int i=0;i<n;i++){
        cin>> v[i];
        sum+=v[i];
        maxi+=(v[i]%x?v[i]/x+1:v[i]/x);
    }
    mini=(sum%x ? sum/x +1 : sum/x);
   cout << mini << " " << maxi << "\n";
   }
    return 0;
}