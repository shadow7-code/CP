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
        string s,t;
        cin>>s>>t;

        vector<vector<int>> pref(4,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            int id=(s[i-1]-'0')*2+(t[i-1]-'0');
            for(int j=0;j<4;j++){
                pref[j][i]=pref[j][i-1];
            }
            pref[id][i]++;
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int a=pref[0][r]-pref[0][l-1]; // 00
            int b=pref[1][r]-pref[1][l-1]; // 01
            int c=pref[2][r]-pref[2][l-1]; // 10
            int d=pref[3][r]-pref[3][l-1]; // 11

            if(abs(b-c)<=a+d)    cout<<"YES\n";
            else                 cout<<"NO\n";
        }
    }
    return 0;
}