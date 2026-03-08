#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool can_build(long long K, const vector<long long>& cnt) {
    if (K == 0) return true;

    long long c0 = cnt[0];
    long long c1 = cnt[1];
    long long s01 = c0 + c1;

    // Minimum '1's we MUST use as H1 because we don't have enough '0's
    long long when_h1_is_1 = max(0LL, K - c0);

    if (s01 < K) return false;

    // If H1 is '1', H2 must be '0' or '1'. 
    // This means those displays 'consume' TWO stickers from the {0, 1} pool.
    // Total {0, 1} stickers needed for HH = (K - when_h1_is_1) + (2 * when_h1_is_1)
    long long if_h1_is_1 = K + when_h1_is_1;

    if (s01 < if_h1_is_1) return false;

    // Now check M1 requirement (K stickers from {0..5})
    // We must account for the stickers already 'reserved' for HH
    long long m1_sum = s01 + cnt[2] + cnt[3] + cnt[4] + cnt[5];
    if (m1_sum < if_h1_is_1 + K) return false;

    long long total = 0;
    for (int i = 0; i < 10; ++i) total += cnt[i];
    if (total < 4 * K) return false;

    return true;
}

void solve() {
    long long n;
    if (!(cin >> n)) return;
    string s;
    cin >> s;

    vector<long long> cnt(10, 0);
    for (char c : s) {
        cnt[c - '0']++;
    }

    long long low = 0, high = n / 4, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (can_build(mid, cnt)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}