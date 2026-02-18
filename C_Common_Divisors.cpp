#include <bits/stdc++.h>
using namespace std;

long long gcd_(long long a, long long b) {
    if (b == 0)    return a;
    return gcd_(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long g = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        g = gcd_(g, x);
    }

    long long res = 0;

    for (long long i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            res++;
            if (i != g / i)    res++;
        }
    }
    cout << res << "\n";

    return 0;
}