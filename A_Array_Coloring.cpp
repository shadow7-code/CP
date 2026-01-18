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

        int odd = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            odd += (x & 1);
        }
        cout << (odd % 2 ? "NO\n" : "YES\n");
    }
    return 0;
}
