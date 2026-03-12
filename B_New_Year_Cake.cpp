#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long even = 0, odd = 0;
        int res = 0;

        for (int i = 0; ; i++) {
            long long val = 1LL << i;
            long long ne = even;
            long long no = odd;

            if (i % 2 == 0)
                ne += val;
            else
                no += val;
            bool flag1 = (ne <= a && no <= b);
            bool flag2 = (ne <= b && no <= a);
            if (flag1 || flag2) {
                even = ne;
                odd = no;
                res++;
            } else {
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}