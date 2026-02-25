#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n), brr(m);
        for (int i = 0; i < n; i++)     cin >> arr[i];
        for (int i = 0; i < m; i++)     cin >> brr[i];
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        long long ans = 0;

        int la = 0, ra = n - 1;
        int lb = 0, rb = m - 1;
        while (la <= ra) {
            int res1 = abs(arr[la] - brr[rb]);
            int res2 = abs(arr[ra] - brr[lb]);
            if (res1 > res2) {
                ans += res1;
                la++;
                rb--;
            } else {
                ans += res2;
                ra--;
                lb++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}