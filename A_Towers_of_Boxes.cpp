#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
        int res = (n + (d / m + 1) - 1) / (d / m + 1);
        cout << res << "\n";
    }
}