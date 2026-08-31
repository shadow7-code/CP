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
        int n0=0,n1=0;
        for(char c:s){
            if(c=='0')    n0++;
            else          n1++;
        }
        int delta_n=n0-n1;
        if(abs(delta_n)>2){
            cout<<-1<<"\n";
            continue;
        }
        int len=1,k0=0,k1=0;
        if(s[0]=='0')    k0++;
        else    k1++;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                len++;
                if(s[i]=='0')    k0++;
                else    k1++;
            }
        }
        int delta_k=k0-k1;
        int res=n-len+max(0,abs(delta_n-delta_k)-1);
        cout<<res<<"\n";
    }
    return 0;
}