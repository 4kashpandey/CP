#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(n + 2, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n + 1) {
            cnt[a[i]]++;
        }
    }

    int mex = 0;
    while (cnt[mex] > 0) {
        mex++;
    }

    long long moves = 0;

    for (int x : a) {
        if (x > mex) {
            moves += (x - (mex + 1));
        }
    }

    for (int v = 1; v < mex; v++) {
        if (cnt[v] > 1) {
            moves += 1LL * (cnt[v] - 1) * v;
        }
    }

    if (moves % 2 == 1) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}