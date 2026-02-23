#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        bool flag = true;
        if ((x - 2 * y) % 3 != 0)   flag = false;
        else if (x < 2 * y)         flag = false;
        else if (x < -4 * y)        flag = false;
 
        if (flag)    cout << "YES" << endl;
        else         cout << "NO" << endl;
    }
    return 0;
}