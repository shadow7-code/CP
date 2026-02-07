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
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        
        bool flag = false;
        for (int i = 0; i + 2 < n; i++) {
            if (arr[i+1] > arr[i] && arr[i+1] > arr[i+2]) {
                cout << "YES\n";
                cout << i+1 << " " << i+2 << " " << i+3 << "\n";
                flag = true;
                break;
            }
        }

        if (!flag) {
            cout << "NO\n";
        }
    }
    return 0;
}
