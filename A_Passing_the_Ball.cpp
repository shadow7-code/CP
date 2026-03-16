#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}