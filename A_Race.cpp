#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        if (min(x,y) < a && a < max(x,y))    cout << "NO\n";
        else                                 cout << "YES\n";
    }
}