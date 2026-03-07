#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long D;
    cin >> n >> D;

    vector<long long> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());

    int l = 0, r = n - 1;
    int res = 0;

    while (l <= r) {
        long long need = (D + arr[r]) / arr[r];
        if (r - l + 1 >= need) {
            res++;
            l += need - 1;
            r--;
        } else {
            break;
        }
    }
    cout << res << "\n";
}