#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<int> pref(n), suff(n);
        vector<int> vis(26, 0);

        // prefix
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(!vis[s[i]-'a']){
                vis[s[i]-'a'] = 1;
                cnt++;
            }
            pref[i] = cnt;
        }

        // reset
        fill(vis.begin(), vis.end(), 0);

        // suffix
        cnt = 0;
        for(int i=n-1;i>=0;i--){
            if(!vis[s[i]-'a']){
                vis[s[i]-'a'] = 1;
                cnt++;
            }
            suff[i] = cnt;
        }

        int ans = 0;
        for(int i=0;i<n-1;i++){
            ans = max(ans, pref[i] + suff[i+1]);
        }

        cout << ans << "\n";
    }
}