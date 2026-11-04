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
        int k=0,s=0,x=0;
        for(int i=1;i<=n;i++){
            k|=i;
            s^=i;
        }
        for(int i=0;i<=k;i++){
            if((s^i^(i<<1))>=2*k){
                x=i;
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0 && (x&i))    cout<<1<<" ";
            else    cout<<0<<" ";
        }
        cout<<"\n";
    }
    return 0;
}