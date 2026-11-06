#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n + 1);
    int current_xor = 0;
    
    for (int i = n; i >= 1; --i) {
        if ((current_xor ^ (2 * i)) > (current_xor ^ i)) {
            v[i] = 1;
            current_xor ^= (2 * i);
        } else {
            v[i] = 0;
            current_xor ^= i;
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        cout << v[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}