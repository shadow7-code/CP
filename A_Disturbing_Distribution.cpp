#include <bits/stdc++.h>
using namespace std;

const long long MOD=676767677;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int>a(n+1);
        long long sum=0;
        int idx=-1;

        for(int i=1;i<=n;i++) {
            cin>>a[i];
            if(a[i]>1) {
                sum+=a[i];
                idx=i;
            }
        }
        if(idx==-1) {
            cout<<1<<"\n";
            continue;
        }
        for(int i=idx+1;i<=n;i++) {
            if(a[i]==1) {
                sum++;
                break;
            }
        }
        cout<<(sum%MOD)<<"\n";
    }
    return 0;
}