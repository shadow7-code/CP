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

        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        vector<pair<long long,long long>> raw = {
            { a,  b}, { a, -b}, {-a,  b}, {-a, -b},
            { b,  a}, { b, -a}, {-b,  a}, {-b, -a}
        };

        set<pair<long long,long long>> moves(raw.begin(), raw.end());

        int res = 0;

        for (auto [dx, dy] : moves) {
            long long nx = xK + dx;
            long long ny = yK + dy;

            long long dxq = llabs(nx - xQ);
            long long dyq = llabs(ny - yQ);

            if ((dxq == a && dyq == b) || (dxq == b && dyq == a)) {
                res++;
            }
        }

        cout << res << '\n';
    }
    return 0;
}


//2 w/o set

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
        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        int res = 0;

        long long dx1[4] = { a,  a, -a, -a };
        long long dy1[4] = { b, -b,  b, -b };

        for (int i = 0; i < 4; i++) {
            long long nx = xK + dx1[i];
            long long ny = yK + dy1[i];

            long long dxq = llabs(nx - xQ);
            long long dyq = llabs(ny - yQ);

            if ((dxq == a && dyq == b) || (dxq == b && dyq == a))    res++;
        }
        if (a != b) {
            long long dx2[4] = { b,  b, -b, -b };
            long long dy2[4] = { a, -a,  a, -a };
            for (int i = 0; i < 4; i++) {
                long long nx = xK + dx2[i];
                long long ny = yK + dy2[i];

                long long dxq = llabs(nx - xQ);
                long long dyq = llabs(ny - yQ);

                if ((dxq == a && dyq == b) || (dxq == b && dyq == a))    res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}

