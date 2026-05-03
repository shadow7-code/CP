#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        int one=0;
        for(char c:s){
            if(c=='1'){
                one++;
            }
        }
        if(one==0){
            cout<<0<<"\n";
            continue;
        }
        if(one==n){
            cout<<1LL*n*n<<"\n";
            continue;
        }

        string x=s+s;
        int cnt=0,mx=0;
        for(char c:x){
            if(c=='1'){
                cnt++;
                mx=max(mx,cnt);
            }else{
                cnt=0;
            }
        }

        long long a=(mx+1)/2;
        long long b=mx/2+1;
        cout<<a*b<<"\n";
    }
    return 0;
}