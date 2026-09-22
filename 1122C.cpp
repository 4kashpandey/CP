#include<bits/stdc++.h>
using namespace std;
int solve1(string &s,int i , int z, int o){
   if(i>=s.size()) return 0;
    while(i<s.size() && s[i]=='0'){
        i++;z--;}
    if(i>=s.size()) return 0;
    return min(z,1+solve1(s,i+1,z,o));
}
int solve(string & s){
    int z=0,o=0;
    for( int i=0;i<s.size();i++){
        if(s[i]=='0')z++;
        else o++;
    }
    if(s[0]=='1') return z;
 
    return solve1(s,0,z,o);
}
int main(){
     long long t;
     cin>> t ;
     while( t-- ){
        long long n;
         cin>> n;
         string s;
         cin>> s;
         int ans=solve(s);
         cout<< ans <<endl;
         }
    return 0;
 }