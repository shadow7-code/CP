#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int sleepy = 0;
        int sleepytill = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1')        sleepytill = max(sleepytill, i + k);
            if (i > sleepytill)     sleepy++;
        }
        cout << sleepy << '\n';
    }
    return 0;
}
