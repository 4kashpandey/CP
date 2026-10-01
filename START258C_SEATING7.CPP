#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> seat(n +1, 0);
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
        seat[v[i]] = 1;
    }
    int i = 1;
    vector<int> ans;
    for (int j = 0; j < k; j++) {
        while (i <= n + 1 && seat[i]) i++;
        if (i <= n) ans.push_back(i);
        i++;
    }
    for (int &a : ans) {
        cout << a << " ";
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
