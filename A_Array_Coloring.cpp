#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &x : arr)   cin >> x;
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (!((arr[i] ^ arr[i-1]) & 1)) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}