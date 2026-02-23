#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n; ) {
            if (n - i == 3) {
                cout << s.substr(i, 3);
                break;
            }
            if (i + 3 < n && !isVowel(s[i + 3])) {
                cout << s.substr(i, 3);
                i += 3;
            } else {
                cout << s.substr(i, 2);
                i += 2;
            }
            if (i < n) cout << ".";
        }
        cout << "\n";
    }
    return 0;
}