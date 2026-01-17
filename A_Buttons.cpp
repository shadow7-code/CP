#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        cout << (a > b ? "First\n" :
                    (a < b ? "Second\n" :
                        (c & 1 ? "First\n" : "Second\n")));
    }
    return 0;
}