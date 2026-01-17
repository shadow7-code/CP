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

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long minimum = *min_element(arr.begin(), arr.end());

        vector<long long> b, c;
        for (long long x : arr) {
            if (x == minimum) b.push_back(x);
            else c.push_back(x);
        }

        if (c.empty()) {
            cout << -1 << "\n";
            continue;
        }

        cout << b.size() << " " << c.size() << "\n";

        for (long long x : b){
            cout << x << " ";
        }
        cout << "\n";

        for (long long x : c){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}