#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, w;
        cin >> n >> w;
        if (w==1) {
            cout << 0 << '\n';
            continue;
        }
        long long k=(n-(w-1)+w-1)/w;
        if (k<0)  k=0;
        cout << n-k << '\n';
    }
    return 0;
}