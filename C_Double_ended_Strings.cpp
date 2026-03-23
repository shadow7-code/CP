#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        int best = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = a.substr(i, j - i + 1);
                if (b.find(sub) != string::npos) {
                    best = max(best, (int)sub.size());
                }
            }
        }
        cout << n + m - 2 * best << '\n';
    }
    return 0;
}