#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long curr=0,mini=LLONG_MAX;
        for(int i=1;i<=n;i++){
            long long x;
            cin >> x;
            curr+=x;
            mini=min(mini,curr/i);
            cout << mini;
            if(i<n) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}