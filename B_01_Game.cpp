#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int zero = 0, one = 0;
        for (char c : s) {
            if (c == '0')   zero++;
            else            one++;
        }
        int moves = min(zero, one);

        if (moves & 1)     cout << "DA\n";
        else               cout << "NET\n";
    }
}
