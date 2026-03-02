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
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if (arr[i] == n) swap(arr[1], arr[i]);
        }
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}