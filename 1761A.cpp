#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  int t;
  cin>> t;
  while(t--){
    int n, a, b;
    cin>> n >> a>> b;
    if(a==n && b==n)cout<< "Yes"<< endl;
    else if(a+b>=n-1)cout<< "No"<<endl;
    else cout<< "Yes"<< endl;
  }
    return 0;
}