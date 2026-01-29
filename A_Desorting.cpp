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

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        bool unsorted = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                unsorted = true;
                break;
            }
        }

        if (unsorted) {
            cout << 0 << '\n';
            continue;
        }

        long long res = LLONG_MAX;
        for (int i = 0; i < n - 1; i++) {
            long long diff = arr[i + 1] - arr[i];
            res = min(res, diff / 2 + 1);
        }

        cout << res << '\n';
    }
    return 0;
}
