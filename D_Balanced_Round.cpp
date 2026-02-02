#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int count = 1;
        int res = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] > k)    count = 1;
            else                            count++;
            res = max(res, count);
        }
        cout << n-res << '\n';
    }
    return 0;
}
