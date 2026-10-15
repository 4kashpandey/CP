#include<bits/stdc++.h>
using namespace std;
int solve(int i , int c, vector<int> & nums , vector<int> & coins , vector<int> & vis){
    if(nums[i]==i) return coins[i];
    if(vis[i]==1) return c;
    vis[i]=1;
    return coins[i]+solve(nums[i],c , nums , coins ,vis)-c;
}
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,c;
        cin>> n , c;
        vector<int> nums(n+1),coins(n+1);
        for(int i=1;i<n+1;i++){
            cin>> nums[i]>> coins[i];
        }

        vector<int> vis(n+1,0);

        int total_coins=0;

        for(int i=1;i<n+1;i++){
            if(vis[i]==0){
                int currcoins=solve(i,c,nums, coins ,vis);
                if(currcoins>0)total_coins+=currcoins;
            }
        }
        cout<<total_coins<< endl;
    }
     return 0;
}
// 4
// 3 10
// 1 3 2
// 7 3 4
// 2 10
// 2 1
// 6 6
// 3 5
// 2 3 1
// 20 1 1
// 5 7
// 2 3 1 5 4
// 8 6 6 4 11

5
5 2
4 2
5 5
3 1 5 2 4
10 1
4
10 2
10 1
12 3
10 3 4