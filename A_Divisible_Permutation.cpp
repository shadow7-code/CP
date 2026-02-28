#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> res(n);
        int l = 1, r = n;
        for (int i = n - 1; i >= 0; i--)
            res[i] = (i & 1) ? r-- : l++;
        for (int i = 0; i < n; i++) {
            cout << res[i];
            if (i + 1 < n) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}