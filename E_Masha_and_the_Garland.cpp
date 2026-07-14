#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<int> pref(n+1);
        for(int i=1;i<n;i++){
            pref[i+1]=pref[i];
            if(s[i]==s[i-1]){
                pref[i+1]++;
            }
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int cnt=pref[r]-pref[l];
            if(((cnt+1)/2)<=k)    cout<<"YES\n";
            else                  cout<<"NO\n";
        }
    }

    return 0;
}