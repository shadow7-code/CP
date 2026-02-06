#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k, n;
        cin >> k >> n;
        
        long long x = k*n+1;
        vector<long long> arr(x);
        for (int i = 1; i <= k * n; i++) {
            cin >> arr[i];
        }

        long long skip = k - ((k + 1) / 2 - 1);
        long long pos = x;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            pos -= skip;
            sum += arr[pos];
        }

        cout << sum << '\n';
    }
    return 0;
}
