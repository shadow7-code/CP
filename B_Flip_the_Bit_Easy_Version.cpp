#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        vector<int> v(n);
        for (auto &x : v)   cin >> x;
        int pos; 
        cin >> pos;
        pos--;

        int val = v[pos];
        int left = 0, right = 0;
        if (pos > 0) {
            for (int i = 0; i + 1 < pos; i++)    left += (v[i] != v[i + 1]);
            if (v[0] != val) left++;
        }
        if (pos < n - 1) {
            for (int i = pos + 1; i + 1 < n; i++)    right += (v[i] != v[i + 1]);
            if (v[n - 1] != val) right++;
        }
        int res = max(left, right);
        if (res & 1) res++;
        cout << res << '\n';
    }
    return 0;
}