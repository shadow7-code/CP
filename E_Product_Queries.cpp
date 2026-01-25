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

        vector<int> a(n), v;
        bool one = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                one = true;
            } else if (a[i] <= n) {
                v.push_back(a[i]);
            }
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        const int INF = 1e9;
        vector<int> d(n + 1, INF);

        vector<int> q;
        d[1] = 0;
        q.push_back(1);

        int h = 0;
        while (h < (int)q.size()) {
            int u = q[h++];

            for (int x : v) {
                long long w = 1LL * u * x;
                if (w > n) break;

                if (d[w] > d[u] + 1) {
                    d[w] = d[u] + 1;
                    q.push_back((int)w);
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            int ans;

            if (i == 1) {
                if (one) {
                    ans = 1;
                } else {
                    ans = -1;
                }
            } else {
                if (d[i] == INF) {
                    ans = -1;
                } else {
                    ans = d[i];
                }
            }

            if (i == n) {
                cout << ans << "\n";
            } else {
                cout << ans << " ";
            }
        }
    }

    return 0;
}
