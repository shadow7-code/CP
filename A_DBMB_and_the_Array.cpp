#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }

        bool flag = false;
        if (sum <= s) {
            long long temp = sum;
            while (temp <= s) {
                if (temp == s) {
                    flag = true;
                    break;
                }
                temp += x;
            }       
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
