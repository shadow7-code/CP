#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        int res = 0;
        for (int i = 0; i < n; i++) {
            int blocks = 1;
            for (int j = 1; j < n; j++) {
                char curr = s[(i + j) % n];
                char prev = s[(i + j - 1) % n];
                if (curr != prev) blocks++;
            }
            res = max(res, blocks);
        }
        cout << res << '\n';
    }
    return 0;
}