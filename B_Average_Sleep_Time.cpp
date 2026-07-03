#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<long long>pref(n+1);
    for(int i=1;i<=n;i++){
        cin>>pref[i];
        pref[i]+=pref[i-1];
    }
    long double res=0;
    for(int i=1;i<=n-k+1;i++)    res+=pref[i+k-1]-pref[i-1];
    cout<<fixed<<setprecision(10)<<res/(n-k+1);

    return 0;
}