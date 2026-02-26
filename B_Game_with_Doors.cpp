#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, r, L, R;
        cin >> l >> r;
        cin >> L >> R;
        if (r < L || R < l) {
            cout << 1 << "\n";
            continue;
        }

        int left = max(l, L);
        int right = min(r, R);

        int res = right - left;

        if (l != L)res++;
        if (r != R) res++;

        cout << res << "\n";
    }
}