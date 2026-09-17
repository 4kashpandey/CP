#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int d=0;
        do{
                d=0;
            for(int i=0;i<n-1;i++)
            {
                if(abs(a[i]-a[i+1])>1)
                {
                    if(a[i]>a[i+1])
                    {
                        swap(a[i],a[i+1]);
                        d+=1;
                    }
                }
            }
        }while(d);
        for(int x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}