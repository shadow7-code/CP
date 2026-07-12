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
        for(int i=1;i+1<=n;i+=2)    cout<<i+1<<" "<<i<<" ";
        if(n&1) cout<<n;
        cout<<"\n";
    }
    return 0;
}