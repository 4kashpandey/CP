#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int len=n-k;
	    
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int maxsum=0;
	    int currsum=0;
	    
	    int i=0,j=0;
	    for(int j=0;j<n;j++){
	       if(j<len){currsum+=arr[j];continue;}
	         maxsum=max(currsum,maxsum);
	         currsum+=arr[j];
	         currsum-=arr[i];
	         maxsum=max(currsum,maxsum);
	         i++;
	    }
	    
	    cout<< maxsum << endl;
	}
	return 0;

}
