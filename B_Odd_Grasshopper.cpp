#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long x, n;
        cin >> x >> n;

        long long r = n % 4;

        if(x % 2 == 0) {
            if(r == 1) x -= n;
            else if(r == 2) x += 1;
            else if(r == 3) x += n + 1;
        }
        else {
            if(r == 1) x += n;
            else if(r == 2) x -= 1;
            else if(r == 3) x -= n + 1;
        }

        cout << x << "\n";
    }
    return 0;
}