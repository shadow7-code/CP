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
        int l = 1, r = 3*n;
        for (int i = 0; i < n; i++) {
            cout << l++ << " " << r-1 << " " << r << " ";
            r -= 2;
        }
        cout << "\n";
    }
}