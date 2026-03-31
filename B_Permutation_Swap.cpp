#include <bits/stdc++.h>
using namespace std;

long long gcdll(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        long long k = abs(arr[0] - 1);
        for (int i = 1; i < n; i++) {
            k = gcdll(k, abs(arr[i] - (i + 1)));
        }
        cout << k << '\n';
    }
    return 0;
}