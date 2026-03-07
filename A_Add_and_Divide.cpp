#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int res = 31;
        for (int i = 0; i <= 30; i++) {
            long long newbie = b + i;
            if (newbie == 1)    continue;

            long long temp = a;
            int ops = i;

            while (temp > 0) {
                temp /= newbie;
                ops++;
            }
            res = min(res, ops);
        }
        cout << res << "\n";
    }
    return 0;
}