#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (auto &x : arr)   cin >> x;

        long long res = arr[0];
        for (int i = 1; i < n; i++)     res &= arr[i];
        cout << res << "\n";
    }
}
