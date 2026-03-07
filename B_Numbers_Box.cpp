#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;

        long long neg = 0;
        long long mini = LLONG_MAX;
        long long sum = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                long long x;
                cin >> x;
                if (x < 0)  neg++;
                mini = min(mini, abs(x));
                sum += abs(x);
            }
        }
        if (neg & 1) sum -= 2 * mini;
        cout << sum << "\n";
    }
}