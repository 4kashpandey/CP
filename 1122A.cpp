#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>arr(3);
    int maxe=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        maxe=max(maxe,n-arr[i]);
    }
        cout<<maxe<<endl;
    }
    return 0;
}