#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long D;
    cin >> n >> D;

    vector<long long> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.rbegin(), arr.rend());

    int res = 0;
    int i = 0;
    while (i < n) {
        long long mx = arr[i];
        long long need = D / mx + 1;
        if (i + need <= n) {
            res++;
            i += need;
        }else    break;
    }
    cout << res << "\n";
}