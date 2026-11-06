#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    
    if (l <= 0 && r >= 0) {
        if (-l == r) {
            cout << 0 << "\n";
        } else {
            int pairs = min(-l, r);
            int total_elements = r - l + 1;
            cout << total_elements - (2 * pairs + 2) << "\n";
        }
    } else {
        cout << r - l << "\n";
    }
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