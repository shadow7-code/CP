#include <bits/stdc++.h>
using namespace std;

int sum(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int res = 0;
        for (long long i = n; i < n + 90; i++) {
            if (i - sum(i) == n) {
                res++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
