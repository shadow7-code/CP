#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> arr(n);
        for (long long &x : arr) {
            cin >> x;
        }
        sort(arr.rbegin(), arr.rend());
        int res = 0;
        for (long long x : arr) {
            if (x * (1LL << res) <= c) {
                res++;
            }
        }
        cout << n-res<< '\n';
    }
    return 0;
}