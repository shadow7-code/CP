#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s = s + s;
        if (c == 'g') {
            cout << 0 << "\n";
            continue;
        }
        int res = 0;
        int j=-1;

        for (int i = 2*n - 1; i >= 0; i--) {
            if (s[i] == 'g')            j = i;
            if (i < n && s[i] == c)     res = max(res,j - i);
        }

        cout << res << "\n";
    }
}