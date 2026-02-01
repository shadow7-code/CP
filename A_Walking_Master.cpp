#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b || a + (d - b) < c){
            cout << -1 << "\n";
        }
        else{
            cout << (d - b) + (a + d - b - c) << "\n";
        }
    }
    return 0;
}
