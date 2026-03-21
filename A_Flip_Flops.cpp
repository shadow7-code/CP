#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c, k;
        cin >> n >> c >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            if (arr[i] <= c) {
                long long x = min(k, c - arr[i]);
                c += (arr[i] + x);
                k -= x;
            }
        }
        cout << c << '\n';
    }
    return 0;
}