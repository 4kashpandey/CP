#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        char c;
        string s;
        cin>> n;
        cin>> c;
        cin>> s;
        int i=0;
        int ans=0;
        while(i<n/2){
            if(s[i]==s[n-1-i]){
                i++;continue;
            }
            else {
                if(s[i]==c || s[n-1-i]==c)ans++;
                else ans+=2;
            }
            i++;
        }
        cout<<ans<< endl;
    }
    return 0;
}