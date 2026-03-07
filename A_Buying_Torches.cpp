#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long need = k * y + k - 1;
        long long res = (need + x - 2) / (x - 1);
        cout << res + k << "\n";
    }
}