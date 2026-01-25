#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string a, b, c;
        cin >> n >> a;
        cin >> m >> b >> c;

        string start, res = a;

        for (int i = 0; i < m; i++) {
            c[i] == 'V' ? start.push_back(b[i]) : res.push_back(b[i]);
        }

        reverse(start.begin(), start.end());
        cout << start + res << '\n';
    }
    return 0;
}
