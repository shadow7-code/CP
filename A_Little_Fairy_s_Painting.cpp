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

        set<long long> s;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long long distinct = s.size();
        long long res = distinct;

        for (long long i : s) {
            if (i >= distinct) {
                res = i;
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}