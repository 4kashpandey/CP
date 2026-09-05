#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int o=0,t1=0,t2=0;

        for( int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x%2!=0)o++;
            else if(x%4==0) t1++;
            else t2++;
        }

        cout << max({o,t1,t2}) << "\n";
    }
    
    return 0;
}