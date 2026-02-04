#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int res = INT_MAX;

        vector<string> find = {"00", "25", "50", "75"};
        for (auto &t : find) {
            int count = 0;
            int idx2 = -1, idx1 = -1;

            for (int i = n - 1; i >= 0; i--) {
                if (s[i] == t[1]) {
                    idx2 = i;
                    break;
                }
            }
            if (idx2 == -1) continue;
            for (int i = idx2 - 1; i >= 0; i--) {
                if (s[i] == t[0]) {
                    idx1 = i;
                    break;
                }
            }
            if (idx1 == -1) continue;

            count = (n - 1 - idx2) + (idx2 - idx1 - 1);
            res = min(res, count);
        }
        cout << res << "\n";
    }
    return 0;
}
