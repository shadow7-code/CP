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
        long long mn1=1e18;
        vector<long long> sec;
        for(int i=0;i<n;i++){
            int m;
            cin >> m;
            vector<long long> a(m);
            for(int j=0;j<m;j++) cin >> a[j];
            sort(a.begin(),a.end());
            mn1=min(mn1,a[0]);
            sec.push_back(a[1]);
        }

        long long res=mn1;
        long long mn2=*min_element(sec.begin(),sec.end());
        for(auto x:sec) res+=x;
        res-=mn2;
        cout << res << '\n';
    }
    return 0;
}