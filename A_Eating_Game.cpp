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
        vector<int> arr(n);
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        int res = 0;
        for (int i = 0; i < n; i++)    if (arr[i] == maxi)    res++;
        cout << res << "\n";
    }
}