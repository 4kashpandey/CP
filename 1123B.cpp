#include <bits/stdc++.h>
using namespace std;

vector<int> constructPermutation(vector<int>& nums) {

    map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

    priority_queue<int> pq;

    for (auto& it : freq) {
        pq.push(it.first);
    }

    vector<int> ans;

    while (!pq.empty()) {

        while (!pq.empty() && freq[pq.top()] == 0) {
            pq.pop();
        }

        if (pq.empty())
            break;

        int mx = pq.top();
        pq.pop();

        ans.push_back(mx);
        freq[mx]--;

        vector<int> remaining;

        while (!pq.empty()) {

            int x = pq.top();
            pq.pop();

            if (freq[x] == 0)
                continue;

            ans.push_back(x);
            freq[x]--;

            if (freq[x] > 0) {
                remaining.push_back(x);
            }
        }

        for (int x : remaining) {
            pq.push(x);
        }

        if (freq[mx] > 0) {
            pq.push(mx);
        }
    }

    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<int> ans = constructPermutation(nums);

        for (int x : ans) {
            cout << x << " ";
        }

        cout << '\n';
    }

    return 0;
}