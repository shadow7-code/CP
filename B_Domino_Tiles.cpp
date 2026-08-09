#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        long long mod=998244353;
        long long res=1;
        for(int i=0;i<2;i++){
            long long x=1,y=1;
            for(int j=i;j<n;j+=2){
                long long cnt=x;
                if(s[j]=='0' || s[j]=='?')    x=y;
                else    x=0;
                if(s[j]=='1' || s[j]=='?')    y=cnt;
                else    y=0;
            }
            res=res*(x+y)%mod;
        }
        cout<<res<<"\n";
    }
    return 0;
}