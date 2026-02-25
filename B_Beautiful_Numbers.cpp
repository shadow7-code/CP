#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int n = x.size();
        vector<int> d(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            d[i] = x[i] - '0';
            sum += d[i];
        }
        if (sum <= 9) {
            cout << 0 << "\n";
            continue;
        }

        vector<pair<int,int>> v; 
        for (int i = 0; i < n; i++)    v.push_back({d[i], i});
        sort(v.begin(), v.end(), greater<pair<int,int>>());

        int res = 0;
        for (auto &z : v) {
            if (sum <= 9)   break;
            int digit = z.first;
            int i = z.second;
            if (i == 0) {
                if (digit > 1) {
                    sum -= (digit - 1);
                    res++;
                }
            }else {
                if (digit > 0) {
                    sum -= digit;
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}