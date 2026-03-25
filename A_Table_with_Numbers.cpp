#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= h && arr[i] <= l) c++;
            else if (arr[i] <= h) a++;
            else if (arr[i] <= l) b++;
        }
        int res = min({a + c, b + c, (a + b + c) / 2});
        cout << res << '\n';
    }
    return 0;
}