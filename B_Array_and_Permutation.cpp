#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> pos(n+1);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            pos[x] = i;
        }

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int idx = -1;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (pos[arr[i]] < idx) {
                ok = false;
                break;
            }
            idx = pos[arr[i]];
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
