#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        string s;
        cin>>s;
        int m=2*n,r=0,b=0;
        for(int i=0;i<m;i++){
            if(s[i]=='1'){
                int x=(i+1)%m;
                int idx=(s[x]=='0')?x:i;
                if(idx&1)    r++;
                else         b++;
            }
        }
        cout<<r<<" "<<b<<"\n";
    }
    return 0;
}