#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> arr(n);
        for(auto &x : arr) cin >> x;
        sort(arr.begin(), arr.end());

        vector<long long> pref(n + 1, 0);
        for(int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + arr[i];

        long long res = 0;
        for(int x = 0; x <= k; x++){
            int op1 = 2 * x;
            int op2 = n - (k - x);
            if(op1 <= op2){
                long long sum = pref[op2] - pref[op1];
                res = max(res, sum);
            }
        }
        cout << res << '\n';
    }
}