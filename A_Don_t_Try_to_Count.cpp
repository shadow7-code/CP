#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (x.find(s) != string::npos) {
            cout << 0 << '\n';
            continue;
        }

        int operations = 0;
        bool flag = false;

        for (int i = 0; i < 6; i++) {  //upper bound = 6
            x += x;
            operations++;
            if (x.find(s) != string::npos) {
                cout << operations << '\n';
                flag = true;
                break;
            }
        }

        if (!flag) cout << -1 << '\n';
    }
    return 0;
}
