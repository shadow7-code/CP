#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x = i;
        bool flag = true;
        while (x > 0) {
            int d = x % 10;
            if (d != 4 && d != 7) {
                flag = false;
                break;
            }
            x /= 10;
        }
        if (flag && n % i == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
