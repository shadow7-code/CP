#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ops = 0;
        for (auto &p : freq) {
            if (p.first == 0)               ops += p.second;
            else if (p.second < p.first)    ops += p.second;
            else                            ops += p.second - p.first;
        }
        cout << ops << '\n';
    }
    return 0;
}
