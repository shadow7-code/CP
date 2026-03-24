#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[10];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                if (l == -1) {
                    l = i;
                }
                r = i;
            }
        }
        if (r - l + 1 <= x)    cout << "YES\n";
        else                   cout << "NO\n";
    }
    return 0;
}