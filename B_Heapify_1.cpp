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
        vector<int> arr(n+1);
        for(int i = 1; i <= n; i++)    cin >> arr[i];

        bool flag = true;
        for(int i = 1; i <= n; i++) {
            int a = i,b = arr[i];

            while(a % 2 == 0) a /= 2;
            while(b % 2 == 0) b /= 2;

            if(a != b) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
