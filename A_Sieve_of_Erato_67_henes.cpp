#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool flag = false;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 67) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
