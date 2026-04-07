#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 != 0)    cout << "YES" << endl;
        else{
            if ((n * k) % 2 == 0)    cout << "YES" << endl;
            else                     cout << "NO" << endl;
        }
    }
    return 0;
}