#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n , m;
        cin>>n>>m;
        string s1,s2;
        cin>> s1>>s2;

        vector<int> v1(26,0);
        vector<int> v2(26,0);

        for(char c:s1)v1[c-'a']++;
        for(char c:s2)v2[c-'a']++;
        bool ans=true;
        for(int i=0;i<26;i++){
            if(i==8 || i==18 || i==23){
                if(v1[i]!=v2[i]+1) ans=false;
            }
            else if(v1[i]!=v2[i])ans=false;
        }

        if(ans)cout<<"YES"<<endl;
        else cout<<"NO" << endl;
    }
    return 0;
}