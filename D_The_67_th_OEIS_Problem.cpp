#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<ll> pm;
        for (ll num = 2; pm.size() < n + 1; num++)    if (isPrime(num)) pm.push_back(num);
        for (int i = 0; i < n; i++)    cout << pm[i] * pm[i + 1] << " ";
        cout << "\n";
    }
}