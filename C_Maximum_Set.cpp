#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int n=1;
        while((l<<n)<=r)    n++;
        int x=1<<(n-1),res=r/x-l+1;

        if(n>1){
            x/=2;
            int cnt=r/x/3-l+1;
            res+=(n-1)*max(0,cnt);
        }
        cout<<n<<" "<<res<<"\n";
    }

    return 0;
}