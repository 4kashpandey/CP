#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>> t;

    while(t--){
        string s;
        cin>> s;

        int z=0,o=0;
        for(char c:s)c=='0'?z++:o++;
        string ans;
        min(z,o)%2?ans="DA":ans="NET";
        cout<< ans << endl;
    }
    return 0;
}