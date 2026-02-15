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
        for (auto &x : arr)    cin >> x;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1){
                arr[i] = 2;
            }
        }

        for (int i = 1; i < n; i++) {
            while (arr[i] % arr[i-1] == 0) {
                arr[i]++;
            }
        }

        for (auto x : arr)   cout << x << " ";
        cout << "\n";
    }
}
