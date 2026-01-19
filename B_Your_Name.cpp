#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        if (s.size() != t.size()) {
            cout << "NO\n";
            continue;
        }

        int freq[26] = {0};
        for (char c : s)    freq[c - 'a']++;
        for (char c : t)    freq[c - 'a']--;

        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
