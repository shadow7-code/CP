#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<vector<int>> adj_pre(6);
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(i == j)      continue;
            if(i + j == 5)  continue;  
            adj_pre[i].push_back(j);
        }
    }
    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> dp(6), ndp(6);

        for(int i = 0; i < n; i++)    cin >> arr[i];
        for(int i = 0; i < 6; i++)    dp[i] = (arr[0] == i+1 ? 0 : 1);

        for(int i = 1; i < n; i++) {
            fill(ndp.begin(), ndp.end(), 1e9);
            for(int j = 0; j < 6; j++) {
                int oper = (arr[i] == j+1 ? 0 : 1);
                for(int prev : adj_pre[j]) {
                    ndp[j] = min(ndp[j],dp[prev] + oper);
                }
            }
            dp = ndp;
        }
        cout << *min_element(dp.begin(), dp.end()) << "\n";
    }
    return 0;
}
