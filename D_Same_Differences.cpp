#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)   cin >> arr[i];
 
        unordered_map<ll, ll> f;
        ll res = 0;
        for (int i = 0; i < n; i++) {
            ll k = arr[i] - i;
            if (f.count(k))    res += f[k];
            f[k]++;
        }
        cout << res << "\n";
    }
    return 0;
}