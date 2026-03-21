#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            vector<pair<long double, int>> et;
            for (int j = i + 1; j < n; j++) {
                long double mid = (a[i] + a[j]) / 2.0;
                if (a[j] > a[i])          et.push_back({mid, 1});
                else if (a[j] < a[i])     et.push_back({mid, -1});
            }
            sort(et.begin(), et.end());

            int curr = 0;
            for (auto &e : et)    if (e.second == -1) curr++;
            int best = curr;
            for (auto &e : et) {
                if (e.second == -1) curr--;
                else                curr++;
                best = max(best, curr);
            }
            res[i] = best;
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}