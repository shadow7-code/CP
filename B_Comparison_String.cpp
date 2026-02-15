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
        string s;
        cin >> s;

        int res = 1, xres = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1])     xres++;
            else                    xres = 1;
            res = max(res, xres);
        }
        cout << res + 1 << "\n";
    }
}
