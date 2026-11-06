#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    int internal_count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        if (i > 0 && i < n - 1 && a[i] > 1) {
            internal_count++;
        }
    }

    if (sum <= n) {
        cout << -1 << "\n";
        return;
    }

    if (internal_count > 0) {
        cout << sum - 1 << "\n";
    } else {
        cout << sum - (n - 1) << "\n";
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