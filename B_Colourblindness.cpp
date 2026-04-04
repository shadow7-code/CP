#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int z;
    cin >> z;
    while (z--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                if (t[i] != 'R') {
                    ok = false;
                    break;
                }
            } else {
                if (t[i] == 'R') {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}