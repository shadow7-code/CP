#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)   cin >> arr[i];

        long long res = 0;
        for (long long i = 0; i < n - 1; i++) {
            if ((arr[i] & 1) == (arr[i + 1] & 1)){
                res++;
            }
        }

        cout << res << "\n";
    }
    return 0;
}
