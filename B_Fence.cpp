#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];

    long long csum = 0;
    for (int i = 0; i < k; ++i) csum += h[i];
    long long msum = csum;
    int min_idx = 0;

    for (int i = 1; i <= n - k; ++i) {
        csum = csum - h[i - 1] + h[i + k - 1];
        if (csum < msum) {
            msum = csum;
            min_idx = i;
        }
    }
    cout << min_idx + 1 << endl;
    return 0;
}
