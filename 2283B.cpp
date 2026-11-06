#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int max_kept = 0;
    
    for (int i = 0; i < n; ++i) {
        int current_kept = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] % a[i] == 0) {
                current_kept++;
            }
        }
        max_kept = max(max_kept, current_kept);
    }
    
    cout << n - max_kept << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}