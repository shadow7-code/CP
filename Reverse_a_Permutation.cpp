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
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            int mx = p[i], pos = i;
            for (int j = i; j < n; j++) {
                if (p[j] > mx) {
                    mx = p[j];
                    pos = j;
                }
            }
            if (mx > p[i]) {
                l = i;
                r = pos;
                break;
            }
        }
        
        if (l != -1) {
            reverse(p.begin() + l, p.begin() + r + 1);
        }
        
        for (int i = 0; i < n; i++)    cout << p[i] << " ";
        cout << "\n";
    }
    return 0;
}