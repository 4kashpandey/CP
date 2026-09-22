#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  long long t;
  cin>> t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long sum=0
    for(long long i=0;i<n;i++){
        cin>> v[i];
        sum+=v[i];
    }
    long long avg=sum/n;
    vector<long long> v1(n,0);

    for(long long i=0;i<n;i++){
        long long curr=v[i];
        if(curr>avg)
    }

    

  }
    return 0;
}